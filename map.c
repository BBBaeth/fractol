/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:28:28 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/13 15:02:53 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	lets_scale(t_mlx *list)
{
	ITRMAX = 30;
	MINX = -2.1;
	MAXX = 0.6;
	MINY = -1.35;
	MAXY = 1.35;
	if (FCT == 2)
	{
		MINX = -1.6;
		MAXX = 1.6;
		MINY = -1.6;
		MAXY = 1.6;
	}
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
