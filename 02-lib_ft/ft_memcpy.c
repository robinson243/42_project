/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 22:43:30 by romukena          #+#    #+#             */
/*   Updated: 2025/04/03 22:54:12 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t count)
{
	size_t			i;
	unsigned char	*dest_char;
	unsigned char	*src_char;

	dest_char = dest;
	src_char = src;
	i = 0;
	while (i < count)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest_char);
}
