/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:09:55 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:02:10 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*stamp;
	t_list		*stamp_next;

	stamp = *alst;
	while (stamp != NULL)
	{
		stamp_next = stamp->next;
		del(stamp->content, stamp->content_size);
		free(stamp);
		stamp = stamp_next;
	}
	*alst = NULL;
}
