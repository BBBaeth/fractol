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

void	get_white2(int pos, t_mlx *list)
{
	if (PALET == 0)
	{
		IMG_DATA[pos + 0] = (char)(labs)(200 + (ITR * 10) % 155);
		IMG_DATA[pos + 1] = (char)(labs)(30 + (ITR * 90) % 255);
		IMG_DATA[pos + 2] = (char)(labs)(100 + (ITR * 10) & 255);
	}
	else if (PALET == 3)
	{
		IMG_DATA[pos + 0] = (char)(labs)(20 + (ITR * 80) % 155);
		IMG_DATA[pos + 1] = (char)(labs)(20 + (ITR * 80) % 155);
		IMG_DATA[pos + 2] = (char)(labs)(20 + (ITR * 80) % 155);
	}
	else if (PALET == 4)
	{
		IMG_DATA[pos + 0] = (char)(labs)(110 + (ITR * 190) % 255);
		IMG_DATA[pos + 1] = (char)(labs)(110 + (ITR * 90) % 105);
		IMG_DATA[pos + 2] = (char)(labs)(165 - (ITR * 90) % 70);
	}
	else if (PALET == 5)
	{
		IMG_DATA[pos + 0] = (char)(labs)(60 + (ITR * 30) % 10);
		IMG_DATA[pos + 1] = (char)(labs)(60 + (ITR * 20) % 15);
		IMG_DATA[pos + 2] = (char)(labs)(65 + (ITR * 20) % 10);
	}
}

void	get_white(int x, int y, t_mlx *list)
{
	int		pos;

	pos = (x * BPP) + (y * S_L);
	set_it_black(pos, x, y, list);
	if (x < LA && y < HA && x >= 0 && y >= 0)
	{
		if (PALET == 1)
		{
			IMG_DATA[pos + 0] = (char)(labs)((30 + (ITR * 80)) % 115);
			IMG_DATA[pos + 1] = (char)(labs)((30 + (ITR * 80)) % 225);
			IMG_DATA[pos + 2] = (char)(labs)((30 + (ITR * 80)) % 225);
		}
		else if (PALET == 2)
		{
			IMG_DATA[pos + 0] = (char)(labs)((120 + y % 9 + (ITR * 43) % 174));
			IMG_DATA[pos + 1] = (char)(labs)((110 + (ITR * 40)) % 165);
			IMG_DATA[pos + 2] = (char)(labs)((180 + (ITR * 30)) % 90);
		}
		else if (PALET == 0 || PALET == 3 || PALET == 4 || PALET == 5)
			get_white2(pos, list);
	}
}

void	get_colored(int x, int y, t_mlx *list)
{
	int		pos;
	int		modulo;

	modulo = 20;
	if (PALET == 4)
		modulo = 215;
	if (PALET == 5)
		modulo = 30;
	pos = (x * BPP) + (y * S_L);
	set_it_black(pos, x, y, list);
	if (x < LA && y < HA && x >= 0 && y >= 0)
	{
		IMG_DATA[pos + 0] = (char)(modulo);
		IMG_DATA[pos + 1] = (char)(modulo);
		IMG_DATA[pos + 2] = (char)(modulo);
	}
}
