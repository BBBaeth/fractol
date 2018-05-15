/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 12:36:30 by ceugene           #+#    #+#             */
/*   Updated: 2018/05/15 14:00:56 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	move_side(int key, t_mlx *list)
{
	float	diff;

	diff = MAXX - MINX;
	diff /= 35;
	if (key == 0)
	{
		MAXX += diff;
		MINX += diff;
	}
	else if (key == 2)
	{
		MAXX -= diff;
		MINX -= diff;
	}
	mouse_wheel(1, DIFFX, DIFFY, list);
	init_repeatable_var(list);
	image_replacer(list);
}

void	move_height(int key, t_mlx *list)
{
	float	diff;

	diff = MAXY - MINY;
	diff /= 35;
	if (key == 13)
	{
		MAXY += diff;
		MINY += diff;
	}
	else if (key == 1)
	{
		MAXY -= diff;
		MINY -= diff;
	}
	mouse_wheel(1, DIFFX, DIFFY, list);
	init_repeatable_var(list);
	image_replacer(list);
}

int		key_pressed(int key, t_mlx *list)
{
	if (key == 0 || key == 2)
		move_side(key, list);
	else if (key == 1 || key == 13)
		move_height(key, list);
	return (0);
}
