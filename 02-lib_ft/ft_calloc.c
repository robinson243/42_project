/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 00:59:10 by romukena          #+#    #+#             */
/*   Updated: 2025/04/10 01:31:24 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = malloc(num * size);
	if (!dest)
		return (NULL);
	while (i < size)
		dest[i++] = 0;
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