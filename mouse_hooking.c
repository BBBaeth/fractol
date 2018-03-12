/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hooking.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:28:37 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/12 14:20:32 by ceugene          ###   ########.fr       */
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
		x -= LA / 2;
		y -= HA / 2;
		JUL_X = ((float)x / LA) * 2;
		JUL_Y = ((float)y / HA) * 2;
		init_repeatable_var(list);
		image_replacer(list);
	}
	return (0);
}
