/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hooking.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:28:37 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/13 15:04:11 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		mouse_move(int x, int y, t_mlx *list)
{
	if ((x > (0.2 * DIFFX) || x < (0.2 * DIFFX * -1))
		|| (y > (0.2 * DIFFY)) || (y < (0.2 * DIFFY * -1)))
	{
		DIFFX = x;
		DIFFY = y;
		JUL_X = ((float)x / ZOOM_X + MINX);
		JUL_Y = ((float)y / ZOOM_Y + MINY);
		init_repeatable_var(list);
		image_replacer(list);
	}
	return (0);
}

void	ft_zoom(int x, int y, t_mlx *list)
{
	float	x1;
	float	y1;

	x1 = (x / (ZOOM_X + MINX));
	y1 = (y / (ZOOM_Y + MINY));
	ITRMAX++;
	ZOOM = ZOOM / 1.6;
	ZOOM_X = ZOOM_X / 1.6;
	ZOOM_Y = ZOOM_Y / 1.6;
	MINX = x1 - ZOOM;
	MAXX = x1 + ZOOM;
	MINY = y1 - ZOOM;
	MAXY = y1 + ZOOM;
}

void	ft_dezoom(int x, int y, t_mlx *list)
{
	float		x1;
	float		y1;

	x1 = (x * (ZOOM_X + MINX));
	y1 = (y * (ZOOM_Y + MINY));
	ITRMAX--;
	ZOOM = ZOOM * 1.6;
	ZOOM_X = ZOOM_X * 1.6;
	ZOOM_Y = ZOOM_Y * 1.6;
	MINX = x1 - ZOOM;
	MAXX = x1 + ZOOM;
	MINY = y1 - ZOOM;
	MAXY = y1 + ZOOM;
}

int		mouse_wheel(int button, int x, int y, t_mlx *list)
{
	if (button == 4 || button == 5)
	{
		if (button == 5)
		{
			ft_zoom(x, y, list);
			init_repeatable_var(list);
			image_replacer(list);
			return (0);
		}
		ft_dezoom(x, y, list);
		init_repeatable_var(list);
		image_replacer(list);
		return (0);
	}
	mlx_hook(WIN_PTR, 6, 1L << 6, mouse_move, list);
	return (1);
}
