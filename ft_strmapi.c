/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 00:08:54 by cesar             #+#    #+#             */
/*   Updated: 2026/06/01 10:25:13 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Applies the function 'f' to each character of the string 's' and saves the
	result in a new array 'new_s'.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*new_s;

	i = 0;
	len = ft_strlen(s);
	new_s = malloc(sizeof(char) * (len + 1));
	while (i <= len)
	{
		new_s[i] = (f)(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
