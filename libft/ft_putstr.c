/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:12:50 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 11:12:52 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int		select;

	select = 0;
	if (s != NULL)
	{
		while (s[select])
		{
			ft_putchar(s[select]);
			select++;
		}
	}
}
