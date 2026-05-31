/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 23:43:25 by cesar             #+#    #+#             */
/*   Updated: 2026/05/31 23:32:10 by cesar            ###   ########.fr       */
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
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free(char **tab, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static void	ft_split_str(char **array, char *str, char c, size_t n)
{
	int		i;
	char	*start;

	i = 0;
	while (i < n)
	{
		while (*str && *str == c)
			str++;
		start = str;
		while (*str && *str != c)
			str++;
		array[i] = ft_substr(start, 0, str - start);
		if (!array[i])
		{
			ft_free(array, i);
			return ;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		n_words;

	if (!s)
		return (NULL);
	n_words = ft_count_words(s, c);
	array = (char **)calloc((n_words + 1), sizeof(char *));
	if (!array)
		return (NULL);
	ft_split_str(array, (char *)s, c, n_words);
	return (array);
}
