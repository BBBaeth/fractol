/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpwind.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:09:45 by ceugene           #+#    #+#             */
/*   Updated: 2018/05/15 15:01:45 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	generate_window(t_mlx *list)
{
	if (!(HW_PTR = mlx_new_window(MLX_PTR, 270, 210, "HELP WINDOW")))
		ft_fail("Error: Unable to create help window.");
	mlx_expose_hook(HW_PTR, &window_info_display, list);
	mlx_key_hook(HW_PTR, &key_manager, list);
	mlx_hook(HW_PTR, 17, 1L << 17, &window_closed, list);
}

void	fractal_name_display(t_mlx *list)
{
	if (FCT == 2)
		NAME = ft_strdup("  Julia");
	else if (FCT == 1)
		NAME = ft_strdup("Mandelbrot");
	else if (FCT == 3)
		NAME = ft_strdup("Burning ship");
	else if (FCT == 4)
		NAME = ft_strdup("   Brain");
	else if (FCT == 5)
		NAME = ft_strdup("Hiroshima");
	else if (FCT == 6)
		NAME = ft_strdup("Paquerette");
	else if (FCT == 7)
		NAME = ft_strdup("   Ripped");
}

int		window_info_display(t_mlx *list)
{
	void	*a;

	fractal_name_display(list);
	a = MLX_PTR;
	mlx_clear_window(MLX_PTR, HW_PTR);
	mlx_string_put(a, HW_PTR, 80, 7, 0xFFFFFFF, NAME);
	mlx_string_put(a, HW_PTR, 10, 35, 0xFFFFFFF, "L: lock/unlock julia\n");
	mlx_string_put(a, HW_PTR, 10, 60, 0xFFFFFFF, "MOUSE WHEEL: zoom in/out\n");
	mlx_string_put(a, HW_PTR, 10, 85, 0xFFFFFFF, "UP/DOWN: change fractal\n");
	mlx_string_put(a, HW_PTR, 10, 110, 0xFFFFFFF, "<- ->: change colors\n");
	mlx_string_put(a, HW_PTR, 10, 135, 0xFFFFFFF, "I: add some details\n");
	mlx_string_put(a, HW_PTR, 10, 160, 0xFFFFFFF, "F: flower mode on/off\n");
	mlx_string_put(a, HW_PTR, 10, 185, 0xFFFFFFF, "WASD: move the fractal\n");
	a = NULL;
	free(NAME);
	return (0);
}

void	help_window(t_mlx *list)
{
	generate_window(list);
	window_info_display(list);
	mouse_wheel(1, DIFFX, DIFFY, list);
}
