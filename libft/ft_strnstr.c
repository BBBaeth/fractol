/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:18:27 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:37:23 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
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
	while (h[select] && select < (int)len)
	{
		count = 0;
		while (n[count] != '\0' && (select + count < (int)len)
				&& h[select + count] != '\0' && (h[select + count] == n[count]))
			count++;
		if (n[count] == '\0')
			return (h + select);
		select++;
	}
	return (NULL);
}
