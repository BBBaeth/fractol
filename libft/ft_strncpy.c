/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:16:53 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:13:21 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		select;

	select = 0;
	while (len > 0 && src[select] != '\0')
	{
		dst[select] = src[select];
		select++;
		len--;
	}
	while (len > 0)
	{
		dst[select] = '\0';
		select++;
		len--;
	}
	return (dst);
}
