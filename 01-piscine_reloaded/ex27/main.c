/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:01:45 by romukena          #+#    #+#             */
/*   Updated: 2025/04/01 18:53:47 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putstr(char *str);

int	main(int ac, char **av)
{
	int		fd;
	char	buffer[1000000];
	int		size;

	if (ac == 1)
		ft_putstr("File name missing.");
	if (ac > 2)
		ft_putstr("Too many arguments.");
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			return (1);
		size = read(fd, buffer, (1000000 - 1));
		buffer[size] = '\0';
		ft_putstr(buffer);
		close(fd);
	}
}
