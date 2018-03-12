/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:26:08 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/12 13:37:02 by ceugene          ###   ########.fr       */
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
			IMG_DATA[pos + 0] = (char)(labs)((130 + (ITR * 23) % 164));
			IMG_DATA[pos + 1] = (char)(labs)((30 + (ITR * 30)) % 225);
			IMG_DATA[pos + 2] = (char)(labs)((30 + (ITR * 30)) % 225);
		}
		else if (PALET == 0)
		{
			IMG_DATA[pos + 0] = (char)(labs)(200 + (ITR * 10) % 155);
			IMG_DATA[pos + 1] = (char)(labs)(10 + (ITR * 90) % 255);
			IMG_DATA[pos + 2] = (char)(labs)(100 + (ITR * 10) & 255);
		}
		else if (PALET == 3)
		{
			IMG_DATA[pos + 0] = (char)(labs)(20 + (ITR * 80) % 155);
			IMG_DATA[pos + 1] = (char)(labs)(20 + (ITR * 80) % 155);
			IMG_DATA[pos + 2] = (char)(labs)(20 + (ITR * 80) % 155);
		}
	}
}

void	get_colored(int x, int y, t_mlx *list)
{
	int		pos;

	pos = (x * BPP) + (y * S_L);
	set_it_black(pos, x, y, list);
	if (x < LA && y < HA && x >= 0 && y >= 0)
	{
		IMG_DATA[pos + 0] = (char)(20);
		IMG_DATA[pos + 1] = (char)(20);
		IMG_DATA[pos + 2] = (char)(20);
	}
}
