/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:16:12 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:13:15 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		select;
	int		select2;

	select = 0;
	select2 = 0;
	while (s1[select])
		select++;
	while (s2[select2] != '\0' && (int)n > 0)
	{
		s1[select] = s2[select2];
		select++;
		select2++;
		n--;
	}
	s1[select] = '\0';
	return (s1);
}
