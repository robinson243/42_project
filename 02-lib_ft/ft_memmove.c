/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:28:09 by romukena          #+#    #+#             */
/*   Updated: 2025/04/04 15:06:54 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_char;
	unsigned char	*dest_char;

	i = 0;
	src_char = (unsigned char *)src;
	dest_char = dest;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest_char);
}

/* int main() {
    char str[] = "Bonjour, monde!";

    printf("Avant memmove: %s\n", str);

	char str1[] = "HelloWorld";
	ft_memmove(str1 + 5, str1, 5);
	printf("c'est  :%s\n", str1);

    // Déplace "Bonjour" à partir de l'index 0 vers l'index 9
    ft_memmove(str + 9, str, 7);

    printf("Après memmove: %s\n", str);

    return 0;
} */