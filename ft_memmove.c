/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:38:41 by crubio-p          #+#    #+#             */
/*   Updated: 2026/05/26 12:51:11 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*char_dest;
	unsigned char	*char_src;
	size_t			i;

	if (dest == NULL || src == NULL)
		return (NULL);
	char_dest = (unsigned char *) dest;
	char_src = (unsigned char *) src;
	i = n;
	if (char_dest < char_src)
	{
		while (i > 0)
		{
			i--;
			char_dest[i] = char_src[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}