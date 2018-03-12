/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:15:39 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:09:31 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char			*d;
	const char		*s;
	size_t			marge;
	size_t			d_len;

	d = dst;
	s = src;
	marge = dstsize;
	while (dstsize > 0 && (marge-- > 0 && *d != '\0'))
		d++;
	d_len = d - dst;
	marge = dstsize - d_len;
	if (marge == 0)
		return (d_len + ft_strlen(src));
	ft_strncat(d, s, marge - 1);
	return (d_len + ft_strlen(src));
}
