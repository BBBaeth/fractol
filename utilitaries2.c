#include "fractol.h"

void	ft_init_var3(t_mlx *list)
{
	JUL_X = 0.4;
	JUL_Y = 0.6;
	LOCK = 0;
	HW = 1;
}

void	iter_upper(t_mlx *list)
{
	if (ITRMAX < 156)
		ITRMAX += 4;
	else
		ft_putstr_fd("State: iteration is already at its maximum.\n", 2);
	init_repeatable_var(list);
	image_replacer(list);
}
