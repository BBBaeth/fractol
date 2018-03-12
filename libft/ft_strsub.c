/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:22:04 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 15:03:04 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		select;
	char	*str;

	select = 0;
	if (s != NULL && len > 0 && (start < ft_strlen(s)))
	{
		if (!(str = (char *)malloc(sizeof(char) * (int)len + 1)))
			return (0);
		while (len > 0)
		{
			str[select] = s[start];
			select++;
			start++;
			len--;
		}
		str[select] = '\0';
		return (str);
	}
	if (start == 0 && len == 0)
		return ("");
	return (NULL);
}
