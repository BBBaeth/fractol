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
	float	tmp;

	tmp = ZR;
	while (ITR < ITRMAX && ZR * ZR + ZI * ZI < 4)
	{
		tmp = ZR;
		ZR = ZR * ZR - ZI * ZI + CR;
		ZI = 2 * ZI * tmp + CI;
		ITR += 1;
	}
	if (ITR == ITRMAX)
		get_colored(X, Y, list);
	else
		get_white(X, Y, list);
}

void	lets_draw_mand(t_mlx *list)
{
	lets_scale(list);
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
		CR = X / ZOOM_X - 2.1;
		CI = Y / ZOOM_Y - 1.2;
		ITRMAX = 20;
		ft_iterative(list);
	}
}

void	lets_draw_julia(t_mlx *list)
{
	lets_scale(list);
	while (X <= LA)
	{
		Y += 1;
		if (Y > LA)
		{
			X += 1;
			Y = 0;
		}
		ZR = X / ZOOM_X - 2.1;
		ZI = Y / ZOOM_Y - 1.2;
		ITR = 0;
		CR = JUL_X;
		CI = JUL_Y;
		ITRMAX = 80;
		ft_iterative(list);
	}
}