/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:28:14 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/12 13:28:17 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		reload_pic(t_mlx *list)
{
	mlx_clear_window(MLX_PTR, WIN_PTR);
	mlx_put_image_to_window(MLX_PTR, WIN_PTR, IMG_PTR, 0, 0);
	return (0);
}

void	image_replacer(t_mlx *list)
{
	void	*new_img_ptr;

	mlx_destroy_image(MLX_PTR, IMG_PTR);
	if (!(new_img_ptr = mlx_new_image(MLX_PTR, IMG_L, IMG_H)))
		ft_fail("Error: Unable to generate image.");
	IMG_PTR = new_img_ptr;
	fractal_generating(list);
	mlx_clear_window(MLX_PTR, WIN_PTR);
	mlx_put_image_to_window(MLX_PTR, WIN_PTR, IMG_PTR, 0, 0);
}
