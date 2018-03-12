/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:09:23 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:01:39 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *nw)
{
	if (alst != NULL && *alst != NULL && nw != NULL)
	{
		nw->next = *alst;
		*alst = nw;
	}
	else
		*alst = nw;
}
