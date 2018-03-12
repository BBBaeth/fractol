/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:21:50 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:17:19 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;
	int		select;
	int		count;

	h = (char *)haystack;
	n = (char *)needle;
	select = 0;
	if (n[0] == '\0')
		return (h);
	while (h[select])
	{
		count = 0;
		while (h[select + count] == n[count] && n[count] != '\0')
			count++;
		if (n[count] == '\0')
			return (h + select);
		select++;
	}
	return (NULL);
}
