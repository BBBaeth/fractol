/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 13:52:13 by ceugene           #+#    #+#             */
/*   Updated: 2018/06/15 14:08:22 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	fractal_name_redirect(char **argv, t_mlx *list)
{
	if (ft_strcmp(argv[1], "mandelbrot") == 0)
		FCT = 1;
	else if (ft_strcmp(argv[1], "julia") == 0)
		FCT = 2;
	else if (ft_strcmp(argv[1], "burningship") == 0)
		FCT = 3;
	else if (ft_strcmp(argv[1], "brain") == 0)
		FCT = 4;
	else if (ft_strcmp(argv[1], "hiroshima") == 0)
		FCT = 5;
	else if (ft_strcmp(argv[1], "brocoli") == 0)
		FCT = 6;
	else if (ft_strcmp(argv[1], "ripped") == 0)
		FCT = 7;
	else if (ft_strcmp(argv[1], "snake") == 0)
		FCT = 8;
}

void	lets_draw_lizard(t_mlx *list)
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
		CR = -0.05;
		CI = 0.3;
		ft_iterative_2(list);
	}
}

void	lets_draw_paque(t_mlx *list)
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
		CR = -0.3;
		CI = 0.3;
		ft_iterative_2(list);
	}
}

void	lets_draw_hiroshima(t_mlx *list)
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
		CR = -0.276211;
		CI = 0;
		ft_iterative_2(list);
	}
}

void	lets_draw_snake(t_mlx *list)
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
		CR = -0.08;
		CI = -0.4;
		ft_iterative_2(list);
	}
}
