/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burningship.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:09:33 by ceugene           #+#    #+#             */
/*   Updated: 2018/05/07 13:16:31 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_iterative_ship(t_mlx *list)
{
	double		tmp;

	while (ITR < ITRMAX && ((FLOW == 0 && ZR * ZR + ZI * ZI < 4)
		|| (FLOW == 1 && ZR * (ZI + ZI) * (ZI + ZI) * ZR < 4)
			|| (FLOW == 2 && ZI * ZR + ZR * ZI < 4)))
	{
		tmp = fabs(ZR * ZR - ZI * ZI + CR);
		ZI = fabs(2 * ZR * ZI + CI);
		ZR = tmp;
		ITR += 1;
	}
	if (ITR == ITRMAX)
		get_colored(X, Y, list);
	else
		get_white(X, Y, list, CLRT[ITR % 15]);
}

void	lets_draw_ship(t_mlx *list)
{
	while (X <= LA)
	{
		Y += 1;
		if (Y > LA)
		{
			X += 1;
			Y = 0;
		}
		ZR = 0;
		ZI = 0;
		ITR = 0;
		CR = X / ZOOM_X + MINX;
		CI = Y / ZOOM_Y + MINY;
		ft_iterative_ship(list);
	}
}
