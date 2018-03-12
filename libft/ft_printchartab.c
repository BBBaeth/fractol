/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchartab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:32:11 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/17 12:58:40 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printchartab(char **tab)
{
	int		select;

	select = 0;
	if (tab != NULL && tab[0] != NULL && tab[0][0] != '\0')
	{
		while (tab[select] != NULL && tab[select] != '\0')
		{
			ft_putstr(tab[select]);
			ft_putchar('\n');
			select++;
		}
	}
}
