/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 00:06:31 by cesar             #+#    #+#             */
/*   Updated: 2026/05/31 23:26:45 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int		len;
	long	num;

	num = n;
	len = (n <= 0);
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static void	ft_fill_itoa(char *str, int n, int len)
{
	long	num;

	num = n;
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num)
	{
		str[--len] = '0' + (num % 10);
		num = num / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_num_len(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_fill_itoa(str, n, len);
	return (str);
}
