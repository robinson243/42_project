/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 16:46:23 by romukena          #+#    #+#             */
/*   Updated: 2025/03/22 17:31:23 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb <= 0)
		return (0);
	if (nb >= 1)
	{
		while (nb >= 2)
		{
			res = res * (nb - 1);
			nb--;
		}
	}
	return (res);
}
/* int main(int ac, char **av)
{
	if (ac)
		printf("%d\n", ft_iterative_factorial(atoi(av[1])));
} */