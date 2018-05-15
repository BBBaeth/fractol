/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:26:20 by ceugene           #+#    #+#             */
/*   Updated: 2018/05/07 14:25:15 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_fail(char *str)
{
	ft_putstr_fd(str, 2);
	ft_putchar('\n');
	ft_putstr_fd("State: ", 2);
	ft_putstr_fd("Fractol is now quitting properly due to an error.\n", 2);
	exit(0);
}

t_mlx	*ft_init_var2(t_mlx *list)
{
	int		x;
	int		y;
	int		pos;

	y = 0;
	X = 0;
	Y = -1;
	if (!(IMG_PTR = mlx_new_image(MLX_PTR, LA, HA)))
		ft_fail("Error: Unable to generate image.");
	if (!(IMG_DATA = mlx_get_data_addr(IMG_PTR, &BPP, &S_L, &END)))
		ft_fail("Error: Unable to access image data.");
	BPP = BPP / 8;
	while (y < HA)
	{
		x = -1;
		while (++x < LA)
		{
			pos = (x * BPP) + (y * S_L);
			set_it_black(pos, x, y, list);
		}
		y++;
	}
	FLOW = 0;
	return (list);
}

t_mlx	*ft_init_var(int argc, char **argv)
{
	t_mlx	*list;

	list = mlx_new();
	FCT = 4;
	if (ft_strcmp(argv[1], "mandelbrot") == 0)
		FCT = 1;
	else if (ft_strcmp(argv[1], "julia") == 0)
		FCT = 2;
	else if (ft_strcmp(argv[1], "burningship") == 0)
		FCT = 3;
	SIZE = 1;
	if (argc >= 3)
	{
		if (ft_strcmp("big", argv[2]) == 0)
			SIZE = 2;
		else if (ft_strcmp("small", argv[2]) == 0)
			SIZE = 0;
	}
	HA = 700 + (250 * SIZE);
	LA = 700 + (250 * SIZE);
	if (!(MLX_PTR = mlx_init()))
		ft_fail("Error: Connection failed.");
	if (!(WIN_PTR = mlx_new_window(MLX_PTR, LA, HA, "FRACTOL")))
		ft_fail("Error: Unable to create window.");
	return (list);
}

void	ft_checkarg(int argc, char **argv)
{
	int		select;

	select = 0;
	while (argc >= 2 && (argv[1][select]))
	{
		argv[1][select] = ft_tolower(argv[1][select]);
		select++;
	}
	select = 0;
	if (argc >= 3 && argv[2][select])
	{
		argv[2][select] = ft_tolower(argv[2][select]);
		select++;
	}
	if (argc < 2 || argv[1][0] == '\0' || (ft_strcmp(argv[1], "mandelbrot")
		&& ft_strcmp(argv[1], "julia") && ft_strcmp(argv[1], "burningship")
			&& ft_strcmp(argv[1], "brain")))
		ft_usage();
}

int		main(int argc, char **argv)
{
	t_mlx	*list;

	ft_checkarg(argc, argv);
	list = ft_init_var(argc, argv);
	list = ft_init_var2(list);
	CLRT = malloc_tab();
	ft_init_var3(list);
	help_window(list);
	lets_scale(list);
	fractal_generating(list);
	mlx_put_image_to_window(MLX_PTR, WIN_PTR, IMG_PTR, 0, 0);
	mouse_wheel(1, DIFFX, DIFFY, list);
	let_mlx_loop(list);
	return (0);
}
