/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:02:03 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/27 11:14:33 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = ft_strlen(dst) + ft_strlen(src);
	if (size != 0)
	{
		while (dst[i] != 0)
		{
			i++;
		}
		while (i < (size -1) && src[i] != 0)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (strlen);
}
