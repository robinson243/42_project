/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:18:59 by romukena          #+#    #+#             */
/*   Updated: 2025/03/22 17:40:36 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb > 1)
		return (ft_recursive_factorial(nb - 1) * nb);
}
/* int main(int ac, char **av)
{
	if (ac)
		printf("%d\n", ft_recursive_factorial(atoi(av[1])));
} */