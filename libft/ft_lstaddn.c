/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:01:47 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/20 12:33:36 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddn(t_list **start, t_list *toadd, int place)
{
	t_list		*link;

	if (start != NULL && toadd != NULL && place == 0)
		ft_lstadd(start, toadd);
	if (start != NULL && toadd != NULL && place > 0)
	{
		while (place != 1)
		{
			*start = (*start)->next;
			place--;
		}
		link = *start;
		*start = (*start)->next;
		toadd->next = *start;
		link->next = toadd;
	}
}
