/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:10:13 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 11:33:24 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*stamp;
	t_list		*stamp_next;

	stamp = lst;
	if (lst != NULL)
	{
		while (stamp != NULL)
		{
			stamp_next = stamp->next;
			f(stamp);
			stamp = stamp_next;
		}
	}
}
