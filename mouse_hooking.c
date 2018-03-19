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
	if (LOCK == 0 && ((x > (0.2 * DIFFX) || x < (0.2 * DIFFX * -1))
		|| (y > (0.2 * DIFFY)) || (y < (0.2 * DIFFY * -1))))
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

void	ft_dezoom(int x, int y, t_mlx *list)
{
	MINY = (y / ZOOM_Y + MINY) - ((ZOOM_Y / 1.2) / 2)
		+ ((ZOOM_Y / 1.2) / 2 - (y / (ZOOM_Y / 1.2)));
	MINX = ((x / ZOOM_X + MINX) - ((ZOOM_X / 1.2) / 2))
		+ ((ZOOM_X / 1.2) / 2 - (x / (ZOOM_X / 1.2)));
	ZOOM_Y = ZOOM_Y / 1.2;
	ZOOM_X = ZOOM_X / 1.2;
	MAXX = (MINX + LA / ZOOM_X);
	MAXY = (MINY + HA / ZOOM_Y);
	ITRMAX -= 2;
}

void	ft_zoom(int x, int y, t_mlx *list)
{
	MINX = ((x / ZOOM_X + MINX) - ((ZOOM_X * 1.2) / 2))
		+ ((ZOOM_X * 1.2) / 2 - (x / ZOOM_X / 1.2));
	MINY = (y / ZOOM_Y + MINY) - ((ZOOM_Y * 1.2) / 2)
		+ ((ZOOM_Y * 1.2) / 2 - (y / ZOOM_Y / 1.2));
	ZOOM_X = ZOOM_X * 1.2;
	ZOOM_Y = ZOOM_Y * 1.2;
	MAXX = (MINX + LA / ZOOM_X);
	MAXY = (MINY + HA / ZOOM_Y);
	ITRMAX += 2;
}

int		mouse_wheel(int button, int x, int y, t_mlx *list)
{
	if (button == 4 || button == 5)
	{
		if (button == 5)
		{
			ft_zoom(x, y, list);
			if (ITRMAX >= 190)
				ITRMAX = 190;
			init_repeatable_var(list);
			image_replacer(list);
			return (0);
		}
		ft_dezoom(x, y, list);
		if (ITRMAX < 15)
			ITRMAX = 15;
		init_repeatable_var(list);
		image_replacer(list);
		return (0);
	}
	else if (LOCK == 0)
		mlx_hook(WIN_PTR, 6, 1L << 6, mouse_move, list);
	return (1);
}
