/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:16:05 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:09:55 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		select;

	select = 0;
	if (s != NULL && *s != '\0')
	{
		if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[select])
		{
			str[select] = f(select, s[select]);
			select++;
		}
		str[select] = '\0';
		return (str);
	}
	return (NULL);
}
