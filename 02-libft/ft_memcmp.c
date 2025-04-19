/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:18:15 by romukena          #+#    #+#             */
/*   Updated: 2025/04/20 00:49:27 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = buf1;
	s2 = buf2;
	i = 0;
	if (count <= 0)
		return (0);
	while ((i < count - 1) && s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/* int main() {
	char myStr1[] = "ABCe";
	char myStr2[] = "ABCE";
	int cmp = ft_memcmp(myStr1, myStr2, 2);
	int cmp1 = memcmp(myStr1, myStr2, 2);
	printf("str1 : %s; str2 : %s ; ", myStr1, myStr2);
	printf("difference is %d | %d\n", cmp, cmp1) ;

	printf(" le res %d", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	return 0;
  } */