/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 11:13:49 by romukena          #+#    #+#             */
/*   Updated: 2025/04/30 14:19:42 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(little) > len)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    const char *s1 = "aaxx";
    const char *s2 = "xx";
    const char *s3 = "abc";

    printf("Test 23 : %s\n", ft_strnstr(s1, s2, 5)); // doit imprimer "xx"
    printf("Test 24 : %s\n", ft_strnstr(s1, s2, 6)); // doit imprimer "xx"
    printf("Test 29 : %s\n", ft_strnstr(s3, s3, 7)); // doit imprimer "abc"

    return 0;
}*/