/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:32:49 by romukena          #+#    #+#             */
/*   Updated: 2025/04/13 02:50:44 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(long int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*dest;
	long int	nb;
	int			i;

	nb = n;
	i = 0;
	dest = (char *)malloc(count_len(n) + 1);
	if (!dest)
		return (NULL);
	dest[count_len(n)] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		dest[0] = '-';
	}
	if (nb == 0)
		return (ft_strdup("0"));
	while (nb > 0)
	{
		dest[count_len(n) - i - 1] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	printf("%s\n", ft_itoa(-15545));
} */