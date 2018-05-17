/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:28:28 by ceugene           #+#    #+#             */
/*   Updated: 2018/05/15 14:57:24 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	lets_scale_2(t_mlx *list)
{
	MINX = -0.5;
	MAXX = 0.5;
	MINY = -1;
	MAXY = 0;
}

void	lets_scale(t_mlx *list)
{
	ITRMAX = 29;
	MINX = -2.1;
	MAXX = 0.6;
	MINY = -1.35;
	MAXY = 1.35;
	if (FCT == 2 || FCT == 4 || FCT == 6 || FCT >= 7)
	{
		MINX = -1.6;
		MAXX = 1.6;
		MINY = -1.5;
		MAXY = 1.5;
	}
	if (FCT == 5)
		lets_scale_2(list);
	if (FCT == 3)
	{
		MINX = -2.0;
		MAXX = 0.7;
		MINY = -1.40;
		MAXY = 1.10;
	}
	ZOOM_X = LA / (MAXX - MINX);
	ZOOM_Y = HA / (MAXY - MINY);
}
