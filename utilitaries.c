/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilitaries.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:29:17 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/12 14:19:59 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	let_mlx_loop(t_mlx *list)
{
	mlx_key_hook(WIN_PTR, &key_manager, list);
	mlx_hook(WIN_PTR, 6, 1L << 6, mouse_move, list);
	mlx_expose_hook(WIN_PTR, &reload_pic, list);
	mlx_loop(MLX_PTR);
}

void	init_repeatable_var(t_mlx *list)
{
	X = 0;
	Y = -1;
}

t_mlx	*mlx_new(void)
{
	t_mlx	*new;

	if (!(new = (t_mlx *)malloc(sizeof(t_mlx) * 1)))
		ft_fail("Error: Could not allocate memory.");
	return (new);
}

void	fractal_generating(t_mlx *list)
{
	if (FCT == 1)
		lets_draw_mand(list);
	else if (FCT == 2)
		lets_draw_julia(list);
	else if (FCT > 2 || FCT < 1)
		ft_fail("Error: Unable to generate this fractal at the moment.");
}