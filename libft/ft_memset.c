/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:11:35 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:07:07 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				select;
	unsigned char	*s;

	s = (unsigned char *)b;
	select = len;
	while (select != 0)
	{
		*s = c;
		s++;
		select--;
	}
	return (b);
}
