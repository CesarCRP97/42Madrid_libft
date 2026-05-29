/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 23:55:06 by cesar             #+#    #+#             */
/*   Updated: 2026/05/29 19:28:24 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_iterator;
	size_t	b_iterator;
	size_t	len_counter;
	size_t	last_initial_pos;

	if (!little)
		return (big);
	len_counter = 0;
	l_iterator = 0;
	b_iterator = 0;
	last_initial_pos = 0;
	while (len_counter < len && little[l_iterator] && big[b_iterator])
	{
		if (little[l_iterator] == big[b_iterator])
		{
			l_iterator++;
			b_iterator++;
		}
		else if (little[l_iterator] != big[b_iterator])
	}

	return (NULL);
}
