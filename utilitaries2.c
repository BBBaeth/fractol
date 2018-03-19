#include "fractol.h"

void	ft_init_var3(t_mlx *list)
{
	PALET = 4;
	DIFFY = 0;
	DIFFX = 0;
	JUL_X = 0.4;
	JUL_Y = 0.6;
	LOCK = 0;
	HW = 1;
}

void	ft_usage(void)
{
	ft_putstr_fd("Usage: fractol [fractal name] [window size]\n", 2);
	ft_putstr_fd("\nAvailable fractals are: \n", 2);
	ft_putstr_fd("   *  Mandelbrot  *\n   *     Julia    *\n", 2);
	ft_putstr_fd("   *  Burningship *\n", 2);
	ft_putstr_fd("\nAvailable window sizes are: \n", 2);
	ft_putstr_fd("   *      big     *\n", 2);
	ft_putstr_fd("   *     small    *\n   *     medium   *\n", 2);
	exit(0);

}

void	iter_upper(t_mlx *list)
{
	if (ITRMAX < 188)
		ITRMAX += 3;
	else
		ft_putstr_fd("State: iteration is already at its maximum.\n", 2);
	init_repeatable_var(list);
	image_replacer(list);
}
