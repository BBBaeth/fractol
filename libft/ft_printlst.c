/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 14:49:44 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/17 15:33:26 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlst(t_list *link)
{
	int		count;

	while (link != NULL && link->content != NULL)
	{
		count = 0;
		while (count < (int)link->content_size)
		{
			count++;
			write(1, (const void *)link->content, 1);
			link->content++;
		}
		write(1, "\n", 1);
		link = link->next;
	}
}
