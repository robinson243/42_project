/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 01:47:51 by romukena          #+#    #+#             */
/*   Updated: 2025/04/06 02:11:08 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t			len;
	size_t			i;
	unsigned char	*buffer;

	buffer = (unsigned char *)string;
	len = ft_strlen(buffer);
	i = 0;
	while (i < len)
	{
		if (buffer[len - 1 - i] == (char)c)
			return (buffer + (len - i - 1));
		i++;
	}
	if ((char)c == '\0')
		return (buffer + len);
	return (NULL);
}

/* int main(void)
{
    const char *str = "abc";
    char target = '\0';

    char *res = ft_strrchr(str, target);
    if (res)
        printf("Found '%c' at: \"%s\"\n", target, res);
    else
        printf("Character '%c' not found in \"%s\"\n", target, str);

    return 0;
} */