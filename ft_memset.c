/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:57:55 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/26 12:11:43 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*to_char;

	if (s == NULL)
		return (NULL);
	i = 0;
	to_char = (unsigned char *) s;
	while (i < n)
	{
		to_char[i] = c;
		i++;
	}
	return (s);
}
