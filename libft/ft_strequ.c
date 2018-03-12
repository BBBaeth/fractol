/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:15:09 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:08:40 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		select;

	select = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[select])
		{
			if (s1[select] != s2[select])
				return (0);
			select++;
		}
		if (s1[select] != s2[select])
			return (0);
	}
	return (1);
}
