/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:39:10 by romukena          #+#    #+#             */
/*   Updated: 2025/03/22 19:26:57 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char e);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac)
	{
		while (i < ac)
		{
			ft_putstr(av[i++]);
			ft_putchar('\n');
		}
	}
}
