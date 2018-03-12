/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:17:01 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 15:42:24 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		select;

	select = 0;
	if (s1 == NULL || s2 == NULL)
		return (-1);
	while (s1[select] && n > 0)
	{
		if (s1[select] != s2[select])
			return (0);
		select++;
		n--;
	}
	if (s1[select] != s2[select] && n > 0)
		return (0);
	return (1);
	if (n == 0 && (ft_strcmp(s1, "") == 0 || ft_strcmp(s2, "") == 0))
		return (1);
	return (0);
}
