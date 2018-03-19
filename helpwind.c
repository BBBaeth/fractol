#include "fractol.h"

void	generate_window(t_mlx *list)
{
	if (!(HW_PTR = mlx_new_window(MLX_PTR, 270, 160, "HELP WINDOW")))
		ft_fail("Error: Unable to create help window.");
	mlx_expose_hook(HW_PTR, &window_info_display, list);
	mlx_key_hook(HW_PTR, &key_manager, list);
	mlx_hook(HW_PTR, 17, 1L << 17, &destroy_help_window, list);
}

int		window_info_display(t_mlx *list)
{
	void	*a;

	if (FCT == 2)
		NAME = "  Julia";
	else if (FCT == 1)
		NAME = "Mandelbrot";
	else if (FCT == 3)
		NAME = "Burning ship";
	a = MLX_PTR;
	mlx_clear_window(MLX_PTR, HW_PTR);
	mlx_string_put(a, HW_PTR, 80, -1, 0xFFFFFFF, NAME);
	mlx_string_put(a, HW_PTR, 10, 12, 0xFFFFFFF, "K: close/open help window\n");
	mlx_string_put(a, HW_PTR, 10, 35, 0xFFFFFFF, "L: lock/unlock julia\n");
	mlx_string_put(a, HW_PTR, 10, 60, 0xFFFFFFF, "MOUSE WHEEL: zoom in/out\n");
	mlx_string_put(a, HW_PTR, 10, 85, 0xFFFFFFF, "UP/DOWN: change fractal\n");
	mlx_string_put(a, HW_PTR, 10, 110, 0xFFFFFFF, "<- ->: change colors\n");
	mlx_string_put(a, HW_PTR, 10, 135, 0xFFFFFFF, "I: add some details\n");
	return (0);
}

int		destroy_help_window(t_mlx *list)
{
	mlx_destroy_window(MLX_PTR, HW_PTR);
	HW = 0;
	return (0);
}

void	help_window(t_mlx *list)
{
	if (HW == 1)
	{
		generate_window(list);
		window_info_display(list);
	}
	else if (HW == 0)
	{
		ft_putstr_fd("State: properly closing help window.\n", 2);
		destroy_help_window(list);
	}
}

void	receive_window_event(t_mlx *list)
{
	if (HW == 1)
		HW = 0;
	else if (HW == 0)
		HW = 1;
	help_window(list);
}
