/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 23:07:56 by romukena          #+#    #+#             */
/*   Updated: 2025/09/13 10:07:11 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	open_infile(char *filename)
{
	int	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		perror("pipex: input file");
		return (-1);
	}
	return (fd);
}

int	open_outfile(char *filename)
{
	int	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		perror("pipex: output file");
		return (-1);
	}
	return (fd);
}


void	dupy(int infile, int outfile)
{
	dup2(infile, STDIN_FILENO);
	dup2(outfile, STDOUT_FILENO);
}

void	closy(int infile, int outfile)
{
	close(infile);
	close(outfile);
}
