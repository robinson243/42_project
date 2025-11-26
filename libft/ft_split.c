/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:07:04 by romukena          #+#    #+#             */
/*   Updated: 2025/05/01 04:48:57 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char c, char str)
{
	return (c == str);
}

int	count_words(const char *str, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (!is_charset(c, str[i]) && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (is_charset(c, str[i]))
			in_word = 0;
		i++;
	}
	return (count);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

char	**split_word(char **tab, const char *s, char c, int word_count)
{
	int		start;
	int		i;
	int		j;

	j = 0;
	i = 0;
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (0);
	while (s[i] && j < word_count)
	{
		while (s[i] && is_charset(c, s[i]))
			i++;
		start = i;
		while (s[i] && !is_charset(c, s[i]))
			i++;
		if (start >= i)
			continue ;
		tab[j] = ft_substr(s, start, i - start);
		if (!tab[j])
			return (free_tab(tab), NULL);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**tab;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	tab = NULL;
	tab = split_word(tab, s, c, word_count);
	return (tab);
}
