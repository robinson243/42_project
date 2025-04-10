/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:44:39 by romukena          #+#    #+#             */
/*   Updated: 2025/04/10 13:35:24 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	count_len(const char *src, const char *set)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (src[i])
	{
		if (is_set(set, src[i]))
			count++;
		i++;
	}
	return (i - count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	dest = (char *)malloc(count_len(s1, set) + 1);
	if (!dest)
		return (NULL);
	while (j < count_len(s1, set))
	{
		if (!(is_set(set, s1[i])))
		{
			dest[j] = s1[i];
			i++;
			j++;
		}
		else
			i++;
	}
	dest[count_len(s1, set)] = '\0';
	return (dest);
}
/* 
int main() {
    // Test 1 : Chaîne sans caractères à trimmer
    char *result1 = ft_strtrim("Hello, World!", "XYZ");
    printf("Test 1 : %s\n", result1);  // Attendu : "Hello, World!"
    free(result1);

    // Test 2 : Trimmer des espaces
    char *result2 = ft_strtrim("   Hello, World!   ", " ");
    printf("Test 2 : '%s'\n", result2);  // Attendu : "Hello, World!"
    free(result2);

    // Test 3 : Trimmer des caractères spécifiques
    char *result3 = ft_strtrim("xxxHello, World!xxx", "x");
    printf("Test 3 : '%s'\n", result3);  // Attendu : "Hello, World!"
    free(result3);

    // Test 4 : La chaîne est vide
    char *result4 = ft_strtrim("", "abc");
    printf("Test 4 : '%s'\n", result4);  // Attendu : ""
    free(result4);

    // Test 5 : Les caractères à trimmer sont au début et à la fin
    char *result5 = ft_strtrim("!!!Hello!!!", "!");
    printf("Test 5 : '%s'\n", result5);  // Attendu : "Hello"
    free(result5);

    // Test 6 : Tous les caractères de la chaîne sont à trimmer
    char *result6 = ft_strtrim("aaaa", "a");
    printf("Test 6 : '%s'\n", result6);  // Attendu : ""
    free(result6);

    // Test 7 : Aucun caractère à trimmer dans la chaîne
    char *result7 = ft_strtrim("abcdef", "xyz");
    printf("Test 7 : '%s'\n", result7);  // Attendu : "abcdef"
    free(result7);

    // Test 8 : Trimmer des caractères à la fois en début et en fin
    char *result8 = ft_strtrim("xxHello Worldxx", "x");
    printf("Test 8 : '%s'\n", result8);  // Attendu : "Hello World"
    free(result8);

    return 0;
} */