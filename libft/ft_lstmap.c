/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:10:24 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 15:32:51 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*stamp;
	t_list		*begin;

	if (lst)
	{
		stamp = f(lst);
		begin = stamp;
	}
	while (lst && lst->next != NULL)
	{
		if (!(stamp->next = f(lst->next)))
			return (NULL);
		lst = lst->next;
		stamp = stamp->next;
	}
	stamp->next = NULL;
	return (begin);
}
