/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:13:11 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:07:45 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		select;
	int		select2;

	select = 0;
	select2 = 0;
	while (s1[select])
		select++;
	while (s2[select2])
	{
		s1[select] = s2[select2];
		select2++;
		select++;
	}
	s1[select] = '\0';
	return (s1);
}
