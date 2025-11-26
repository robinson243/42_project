/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 20:53:36 by romukena          #+#    #+#             */
/*   Updated: 2025/09/13 02:05:00 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*all_path(char **tab)
{
	int		i;
	char	*path;

	i = 0;
	while (tab[i])
	{
		if (ft_strncmp(tab[i], "PATH=", 5) == 0)
		{
			path = ft_strndup(tab[i] + 5, 0, ft_strlen(tab[i]));
			if (!path)
				return (NULL);
			return (path);
		}
		i++;
	}
	return (NULL);
}

char	*good_path(char *str, char *cmd)
{
	int		i;
	char	**path;
	char	*temp;
	char	*dest;

	i = 0;
	path = ft_split(str, ":");
	if (!path)
		return (NULL);
	while (path[i])
	{
		temp = ft_strjoin(path[i], "/");
		if (!temp)
			return (free_tableau(path), NULL);
		dest = ft_strjoin(temp, cmd);
		if (!dest)
			return (free_tableau(path), NULL);
		if (try_command(dest) == 0)
			return (free_tableau(path), dest);
		free(temp);
		free(dest);
		i++;
	}
	free_tableau(path);
	return (NULL);
}

int	try_command(char *str)
{
	if (access(str, X_OK) == 0)
		return (0);
	return (-1);
}

void	free_all(char *fullpath, char **cmd_args, char *path)
{
	if (cmd_args)
		free_tableau(cmd_args);
	if (fullpath)
		free(fullpath);
	if (path)
		free(path);
}
