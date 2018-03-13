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
	if ((x > (0.7 * DIFFX) || x < (0.7 * DIFFX * -1))
		|| (y > (0.7 * DIFFY)) || (y < (0.7 * DIFFY * -1)))
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
