/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 20:35:27 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/30 20:53:06 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Parameters:
		- s1: string to trim
		- set: substring to be trimmed from s1.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	set_len;
	size_t	i;

	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	set_len = ft_strlen(set);
	while (start < set_len && s1[start] == set[start])
	{
		start++;
	}
	i = 0;
	while (end >= 0 && s1[end] == set[i])
	{
		end--;
		i++;
	}
	return (ft_substr(s1, start, end - start));
}
