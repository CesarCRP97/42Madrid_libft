/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 23:43:25 by cesar             #+#    #+#             */
/*   Updated: 2026/05/31 00:05:41 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] == c) || (s[i] != c && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	nbr_words;
	size_t	i;
	size_t	act_word_len;

	nbr_words = ft_count_words(s, c);
	if (!nbr_words)
		return (NULL);
	array = malloc(sizeof(char *) * (nbr_words + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		act_word_len = ft_word_len(s, c);
		array[i] = ft_substr(s, 0, act_word_len);
		s += act_word_len;
		i++;
	}
	array[nbr_words] = NULL;
	return (array);
}
