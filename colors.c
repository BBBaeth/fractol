/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:26:08 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/20 11:26:43 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	set_it_black(int pos, int x, int y, t_mlx *list)
{
	if (x < LA && y < HA && x >= 0 && y >= 0)
	{
		IMG_DATA[pos + 0] = (char)255;
		IMG_DATA[pos + 1] = (char)255;
		IMG_DATA[pos + 2] = (char)255;
		IMG_DATA[pos + 3] = (char)0;
	}
}

void	get_white(int x, int y, t_mlx *list, t_color color)
{
	int		pos;

	pos = (x * BPP) + (y * S_L);
	set_it_black(pos, X, Y, list);
	if (x < LA && y < HA && x >= 0 && y >= 0)
	{
		IMG_DATA[pos + 0] = (char)color.b;
		IMG_DATA[pos + 1] = (char)color.g;
		IMG_DATA[pos + 2] = (char)color.r;
	}
}

void	get_colored(int x, int y, t_mlx *list)
{
	int		pos;

	pos = (x * BPP) + (y * S_L);
	set_it_black(pos, X, Y, list);
	if (x < LA && y < HA && x >= 0 && y >= 0)
	{
		IMG_DATA[pos + 0] = (char)(0);
		IMG_DATA[pos + 1] = (char)(0);
		IMG_DATA[pos + 2] = (char)(0);
	}
}
