/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 11:13:49 by romukena          #+#    #+#             */
/*   Updated: 2025/04/19 17:55:13 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *target, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!target && len > 0)
		return ((char *)str);
	if (*target == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (target[j] == str[i + j] && (i + j) < len)
			j++;
		if (target[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	const char *s = "abcabc";
	const char *t = "cab";

	char *res = ft_strnstr(s, t, 6);

	printf("%s ",ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));

	return 0;
} */