/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 03:00:14 by romukena          #+#    #+#             */
/*   Updated: 2025/03/29 03:17:28 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			while (tab[i][j])
			{
				j++;
			}
			count += j;
			j = 0;
		}
		i++;
	}
	return (count);
}

/* int	fun(char *str)
{
	if (str)
		return (1);
	else
		return (0);
	
}

int main(void)
{
	char *tab[] = {"je", "suis", "trop", "fort", NULL};
	int val = ft_count_if(tab, fun);
	printf("%d", val);
} */