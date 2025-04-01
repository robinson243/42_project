/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 01:54:59 by romukena          #+#    #+#             */
/*   Updated: 2025/03/23 02:06:13 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	dest = malloc(sizeof(int) * (max - min));
	if (!dest || min >= max)
		return (0);
	while (min + i < max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}

/* int main(void)
{
	int min = 20, max = 70;
	int	*dest = ft_range(min, max);

	for (int i = 0; i < (max - min); i++)
	{
		printf("%d\n", dest[i]);
	}
	free(dest);
} */