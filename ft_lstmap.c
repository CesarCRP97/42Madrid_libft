/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crubio-p <crubio-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:53:46 by crubio-p          #+#    #+#             */
/*   Updated: 2026/06/04 09:56:59 by crubio-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_front;
	t_list	*actual;
	t_list	*to_add;
	
	if (lst != NULL)
	{
		lst_front = ft_lstnew(lst->content);
		actual = lst_front;
		lst = lst->next;
		while (lst != NULL)
		{
			to_add = ft_lstnew((f)(lst->content));
			if(to_add == NULL)
			{
				ft_lstclear(&lst_front, (del));
				free(lst_front);
				return (NULL);
			}
			actual->next = to_add;
			actual = actual->next;
			lst = lst->next;
		}
		return (lst_front);
	}
	else
		return (lst_front);	
}
