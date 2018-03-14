/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:26:20 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/12 13:39:06 by ceugene          ###   ########.fr       */
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
	return (list);
}

t_mlx	*ft_init_var(int argc, char **argv)
{
	t_mlx	*list;

	list = mlx_new();
	if (ft_strcmp(argv[1], "mandelbrot") == 0)
		FCT = 1;
	else if (ft_strcmp(argv[1], "julia") == 0)
		FCT = 2;
	SIZE = 1;
	if (argc >= 3)
	{
		if (ft_strcmp("big", argv[2]) == 0)
			SIZE = 2;
		else if (ft_strcmp("small", argv[2]) == 0)
			SIZE = 0;
	}
	HA = 600 + (200 * SIZE);
	LA = 600 + (200 * SIZE);
	PALET = 1;
	if (!(MLX_PTR = mlx_init()))
		ft_fail("Error: Connection failed.");
	if (!(WIN_PTR = mlx_new_window(MLX_PTR, LA, HA, argv[1])))
		ft_fail("Error: Unable to create window.");
	DIFFY = 0;
	DIFFX = 0;
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
		&& ft_strcmp(argv[1], "julia")))
	{
		ft_putstr_fd("Usage: fractol [fractal name] [window size]\n", 2);
		ft_putstr_fd("\nAvailable fractals are: \n", 2);
		ft_putstr_fd("   * Mandelbrot *\n   *    Julia   *\n", 2);
		ft_putstr_fd("\nAvailable window sizes are: \n", 2);
		ft_putstr_fd("   *     big    *\n", 2);
		ft_putstr_fd("   *    small   *\n   *    medium  *\n", 2);
		exit(0);
	}
}

int		main(int argc, char **argv)
{
	t_mlx	*list;

	ft_checkarg(argc, argv);
	list = ft_init_var(argc, argv);
	list = ft_init_var2(list);
	JUL_X = 0.4;
	JUL_Y = 0.6;
	ZOOM = 1;
	lets_scale(list);
	fractal_generating(list);
	mlx_put_image_to_window(MLX_PTR, WIN_PTR, IMG_PTR, 0, 0);
	mouse_wheel(1, DIFFX, DIFFY, list);
	let_mlx_loop(list);
	return (0);
}
