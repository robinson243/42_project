/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 00:48:32 by romukena          #+#    #+#             */
/*   Updated: 2025/04/05 01:06:15 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(str));
	if (!dest)
		return (NULL);
	ft_strcpy(dest, str);
	return (dest);
}
/* int main(void)
{
	char *src = "hello";
	char *dest;
	dest = ft_strdup(src);


	printf("%s", dest);
} */