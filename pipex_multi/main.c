/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:45:50 by romukena          #+#    #+#             */
/*   Updated: 2025/09/13 10:31:22 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	pipex(int ac, char **av, char **envp)
{
	int	nb;
	int	*pipes;
	int	i;

	nb = ac - 3;
	pipes = create_pipes(nb - 1);
	if (!pipes)
		exit(EXIT_FAILURE);
	setup_and_fork(nb, pipes, av, envp);
	close_pipes(pipes, nb - 1);
	i = 0;
	while (i < nb)
	{
		wait(NULL);
		i++;
	}
	free(pipes);
}

int	main(int ac, char **av, char **envp)
{
	if (ac < 5)
	{
		ft_putstr_fd("Usage: ./pipex infile cmd1 cmd2 ... outfile\n", 2);
		exit(EXIT_FAILURE);
	}
	pipex(ac, av, envp);
	return (0);
}
