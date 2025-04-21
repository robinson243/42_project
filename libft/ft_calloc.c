/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 00:59:10 by romukena          #+#    #+#             */
/*   Updated: 2025/04/21 16:27:51 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*dest;

	if (size != 0 && num > SIZE_MAX / size)
		return (NULL);
	dest = malloc(num * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, num * size);
	return (dest);
}

/* int	main(void)
{
	size_t			i;
	size_t			size = 10;
	unsigned char	*buffer;

	buffer = (unsigned char *)ft_calloc(size, sizeof(unsigned char));
	if (!buffer)
	{
		printf("Échec de l'allocation mémoire.\n");
		return (1);
	}
	printf("Contenu du buffer initialisé :\n");
	for (i = 0; i < size; i++)
		printf("buffer[%zu] = %u\n", i, buffer[i]);

	free(buffer);
	return (0);
} */