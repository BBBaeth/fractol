/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:11:27 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:07:00 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (a > b)
	{
		while ((int)len >= 1)
		{
			a[len - 1] = b[len - 1];
			len--;
		}
	}
	if (b > a)
	{
		while ((int)len >= 1)
		{
			*a = *b;
			a++;
			b++;
			len--;
		}
	}
	return (dst);
}
