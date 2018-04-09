/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:28:22 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/12 13:45:57 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_iterative(t_mlx *list)
{
	double		tmp;

	tmp = ZR;
	while (ITR < ITRMAX && ((FLOW == 0 && (double)(ZR * ZR + ZI * ZI) < 4)
		|| (FLOW == 1 && ZR * (ZI + ZI) * (ZI + ZI) * ZR < 20)
			|| (FLOW == 2 && ZI * (ZI + ZI * ZR) + (ZI + ZI * ZR) * ZR < 4)))
	{
		tmp = ZR;
		ZR = (double)(ZR * ZR) - (double)(ZI * ZI) + CR;
		ZI = (double)(2 * ZI) * tmp + CI;
		ITR += 1;
	}
	if (ITR == ITRMAX)
		get_colored(X, Y, list);
	else
		get_white(X, Y, list, CLRT[ITR % 15]);
}

void	lets_draw_mand(t_mlx *list)
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
		ft_iterative(list);
	}
}

void	lets_draw_julia(t_mlx *list)
{
	while (X <= LA)
	{
		Y += 1;
		if (Y > LA)
		{
			X += 1;
			Y = 0;
		}
		ZR = X / ZOOM_X + MINX;
		ZI = Y / ZOOM_Y + MINY;
		ITR = 0;
		CR = JUL_X;
		CI = JUL_Y;
		ft_iterative(list);
	}
}
