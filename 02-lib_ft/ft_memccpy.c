/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 00:05:01 by romukena          #+#    #+#             */
/*   Updated: 2025/04/04 02:16:36 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest_char;
	unsigned char	*src_char;

	dest_char = dest;
	src_char = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		if (src_char[i] == (unsigned char)c)
			return (dest_char + i + 1);
		i++;
	}
	return (NULL);
}
/* 
int main(void)
{
	char string1[60] = "The quick brown dog jumps over the lazy fox";
	char buffer[61] = {0};  // initialise tout à 0
	char *pdest;

	printf("Function: ft_memccpy 60 characters or to character 's'\n");
	printf("Source: %s\n", string1);
	pdest = ft_memccpy(buffer, string1, 's', 60);
	printf("%s\n", pdest);
	if (pdest)
	{
		// *pdest = '\0';  // on ajoute un \0 pour bien couper la chaîne
		printf("Character 's' found.\n");
	}
	else
	{
		printf("Character 's' not found within the first 60 characters.\n");
	}

	printf("Result: %s\n", buffer);
	printf("Length: %ld characters\n", strlen(buffer));
} */