/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:55:50 by romukena          #+#    #+#             */
/*   Updated: 2025/09/13 10:04:45 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <unistd.h>

int		open_infile(char *filename);
int		open_outfile(char *filename);
void	dupy(int infile, int outfile);
void	closy(int infile, int outfile);
void	ft_putstr_fd(char *s, int fd);

int		*create_pipes(int n);
void	close_pipes(int *pipes, int n);

void	execute_command(int infile_fd, int outfile_fd, char **envp, char *cmd);
void	setup_and_fork(int nb, int *pipes, char **av, char **envp);
void	pipex(int ac, char **av, char **envp);

char	**ft_split(char *s, char *charset);
char	*ft_strjoin(char *s1, char *s2);
void	free_tableau(char **str);
void	free_all(char *fullpath, char **cmd_args, char *path);

int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strdup(char *str);
char	*ft_strndup(char *s, int start, int end);

char	**parse_cmd(char *cmd);
char	*all_path(char **tab);
char	*good_path(char *str, char *cmd);
int		try_command(char *str);

#endif
