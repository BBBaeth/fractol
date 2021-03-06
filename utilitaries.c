/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilitaries.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:29:17 by ceugene           #+#    #+#             */
/*   Updated: 2018/05/15 14:57:13 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	let_mlx_loop(t_mlx *list)
{
	mlx_key_hook(WIN_PTR, &key_manager, list);
	mlx_mouse_hook(WIN_PTR, &mouse_wheel, list);
	mlx_hook(WIN_PTR, 17, 1L << 17, &window_closed, list);
	mlx_hook(WIN_PTR, 2, 1L << 0, &key_pressed, list);
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
	new->hw_ptr = NULL;
	new->read_this = NULL;
	return (new);
}

void	fractal_generating(t_mlx *list)
{
	color_distributor(list);
	if (FCT == 1)
		lets_draw_mand(list);
	else if (FCT == 2)
		lets_draw_julia(list);
	else if (FCT == 3)
		lets_draw_ship(list);
	else if (FCT == 4)
		lets_draw_brain(list);
	else if (FCT == 5)
		lets_draw_hiroshima(list);
	else if (FCT == 6)
		lets_draw_paque(list);
	else if (FCT == 7)
		lets_draw_lizard(list);
	else if (FCT == 8)
		lets_draw_snake(list);
	else
		ft_fail("Error: Unable to generate this fractal at the moment.");
}
