/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilitaries2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:09:57 by ceugene           #+#    #+#             */
/*   Updated: 2018/05/15 15:00:39 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_init_var3(t_mlx *list)
{
	PALET = 0;
	DIFFY = 0;
	DIFFX = 0;
	JUL_X = 0.4;
	JUL_Y = 0.6;
	LOCK = 0;
}

void	ft_usage(void)
{
	ft_putstr_fd("Usage: fractol [fractal name] [window size]\n", 2);
	ft_putstr_fd("\nAvailable fractals are: \n", 2);
	ft_putstr_fd("   *  Mandelbrot  *\n   *     Julia    *\n", 2);
	ft_putstr_fd("   *  Burningship *\n   *     Brain    *\n", 2);
	ft_putstr_fd("   *   Hiroshima  *\n   *    Brocoli   *\n", 2);
	ft_putstr_fd("   *    Ripped    *\n   *     Snake    *\n", 2);
	ft_putstr_fd("\nAvailable window sizes are: \n", 2);
	ft_putstr_fd("   *      big     *\n", 2);
	ft_putstr_fd("   *     small    *\n   *     medium   *\n", 2);
	exit(0);
}

void	flower_mode(t_mlx *list)
{
	if (FLOW < 2)
		FLOW++;
	else if (FLOW >= 2)
		FLOW = 0;
	init_repeatable_var(list);
	image_replacer(list);
}

void	iter_upper(t_mlx *list)
{
	if (ITRMAX < 148)
		ITRMAX += 1;
	else
		ft_putstr_fd("State: iteration is already at its maximum.\n", 2);
	init_repeatable_var(list);
	image_replacer(list);
}
