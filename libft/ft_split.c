/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:07:04 by romukena          #+#    #+#             */
/*   Updated: 2025/04/21 16:53:17 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char c, char str)
{
	return (c == str);
}

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && !is_charset(c, str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && is_charset(c, str[i]))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	if (!tab)
		return (0);
	while (s[i])
	{
		while (s[i] && is_charset(c, s[i]))
			i++;
		start = i;
		while (s[i] && !is_charset(c, s[i]))
			i++;
		tab[j++] = ft_substr(s, start, (i - start));
	}
	tab[j++] = NULL;
	return (tab);
}

/* int main()
{
    char str[] = "Hello, world! Welcome to C programming.";
    char charset = ' ';

    char **result = ft_split(str, charset);
    int i = 0;

    // Vérification si l'allocation a réussi.
    if (!result)
    {
        printf("Erreur d'allocation mémoire\n");
        return 1;
    }

    // Afficher les mots séparés
    while (result[i])
    {
        printf("Mot %d : %s\n", i + 1, result[i]);
        i++;
    }

    // Si tout va bien, on libère la mémoire allouée
    i = 0;
    while (result[i])
    {
        free(result[i]);  // Libérer chaque mot
        i++;
    }
    free(result);  // Libérer le tableau de mots

    return 0;
} */
