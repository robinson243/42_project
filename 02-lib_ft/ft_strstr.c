/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 10:47:49 by romukena          #+#    #+#             */
/*   Updated: 2025/04/06 11:06:21 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *target)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!target)
		return ((char *)str);
	while (str[i])
	{
		while (target[j] == str[i + j])
			j++;
		if (target[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
// int main(void)
// {
//    char *string1 = "needle in a haystack";
//    char *string2 = "haystack";
//    char *result;
//    result = ft_strstr(string1,string2);
//    /* Result = a pointer to "haystack" */
//    printf("%s\n", result);
// }