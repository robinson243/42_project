/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:38:24 by romukena          #+#    #+#             */
/*   Updated: 2025/04/09 12:26:05 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*dest;

	dest = malloc(sizeof(char) * size);
	if (!dest)
		return (NULL);
	dest = ft_memset((void *)dest, 0, size);
	return (dest);
}

/* int main(void)
{
    char *str = (char *)ft_memalloc(10);

    if (str == NULL)
    {
        printf("Erreur d'allocation.\n");
        return 1;
    }

    printf("Allocation réussie.\n");

    free(str);
    return 0;
} */