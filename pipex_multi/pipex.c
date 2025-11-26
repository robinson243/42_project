/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 09:51:20 by romukena          #+#    #+#             */
/*   Updated: 2025/09/13 10:25:11 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	execute_command(int infile_fd, int outfile_fd, char **envp, char *cmd)
{
	char	*fullpath;
	char	*path;
	char	**cmd_args;

	fullpath = all_path(envp);
	cmd_args = parse_cmd(cmd);
	if (!fullpath || !cmd_args || !cmd_args[0])
	{
		ft_putstr_fd(" : command not found\n", 2);
		free_all(fullpath, cmd_args, NULL);
		exit(EXIT_FAILURE);
	}
	path = good_path(fullpath, cmd_args[0]);
	if (!path)
	{
		ft_putstr_fd(" : command not found\n", 2);
		free_all(fullpath, cmd_args, path);
		exit(EXIT_FAILURE);
	}
	dupy(infile_fd, outfile_fd);
	closy(infile_fd, outfile_fd);
	execve(path, cmd_args, envp);
	ft_putstr_fd(" : command not found\n", 2);
	free_all(fullpath, cmd_args, path);
	exit(EXIT_FAILURE);
}

int	*create_pipes(int n)
{
	int	i;
	int	*pipes;

	i = 0;
	pipes = malloc(sizeof(int) * 2 * n);
	if (!pipes)
	{
		ft_putstr_fd("pipex: malloc failed\n", 2);
		exit(EXIT_FAILURE);
	}
	while (i < n)
	{
		if (pipe(pipes + 2 * i) == -1)
		{
			ft_putstr_fd("pipex: pipe creation failed\n", 2);
			free(pipes);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	return (pipes);
}

void	close_pipes(int *pipes, int n)
{
	int	i;

	i = 0;
	while (i < n * 2)
	{
		close(pipes[i]);
		i++;
	}
}

void	set_io(int i, int nb, int *pipes)
{
	if (i == 0)
		dup2(pipes[-2], STDIN_FILENO);
	else
		dup2(pipes[2 * (i - 1)], STDIN_FILENO);
	if (i == nb - 1)
		dup2(pipes[-1], STDOUT_FILENO);
	else
		dup2(pipes[2 * i + 1], STDOUT_FILENO);
}

void	setup_and_fork(int nb, int *pipes, char **av, char **envp)
{
	int	in;
	int	out;
	int	i;

	in = open_infile(av[1]);
	out = open_outfile(av[nb + 2]);
	pipes[-2] = in;
	pipes[-1] = out;
	i = 0;
	while (i < nb)
	{
		if (fork() == 0)
		{
			set_io(i, nb, pipes);
			close_pipes(pipes, nb - 1);
			closy(in, out);
			execute_command(STDIN_FILENO, STDOUT_FILENO, envp, av[i + 2]);
		}
		i++;
	}
	closy(in, out);
}
