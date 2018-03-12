/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:21:09 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:42:32 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*select;

	select = (char *)s;
	while (*select != '\0')
		select++;
	while (select != s - 1)
	{
		if (*select == c)
			return (select);
		select--;
	}
	return (NULL);
}
