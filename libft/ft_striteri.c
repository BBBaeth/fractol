/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:15:24 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 15:39:30 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	pos;

	pos = 0;
	if (s != NULL && *s != '\0' && f != NULL)
	{
		while (*s != '\0')
		{
			f(pos, s);
			s++;
			pos++;
		}
	}
}
