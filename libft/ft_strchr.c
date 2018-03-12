/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:14:21 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 12:10:29 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*select;

	select = (char *)s;
	while (*select != '\0')
	{
		if (*select == c)
			return (select);
		select++;
	}
	if (c == '\0')
		return (select);
	else
		return (NULL);
}
