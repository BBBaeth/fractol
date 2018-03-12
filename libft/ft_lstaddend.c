/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:05:58 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/17 16:35:46 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list *start, t_list *toadd)
{
	t_list		*link;

	if (start != NULL)
	{
		link = start;
		while (link->next != NULL)
			link = link->next;
		link->next = toadd;
		toadd->next = NULL;
	}
}
