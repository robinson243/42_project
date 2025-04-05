/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 04:20:11 by romukena          #+#    #+#             */
/*   Updated: 2025/04/05 04:25:02 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t count)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i] && i < count)
	{
		dest[size + i] = src[i];
		i++;
	}
	return (dest);
}

/* int main(void)
{
	char myStr[20] = "Hello";
	ft_strncat(myStr, " World!", 5);
	printf("%s", myStr);
} */