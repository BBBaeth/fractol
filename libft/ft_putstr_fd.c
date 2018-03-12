/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:12:57 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 11:13:06 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		select;

	select = 0;
	if (s != NULL)
	{
		while (s[select])
		{
			ft_putchar_fd(s[select], fd);
			select++;
		}
	}
}
