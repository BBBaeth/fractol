/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:26:13 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/12 14:19:07 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		window_closed(t_mlx *list)
{
	if (list != NULL)
	{
		mlx_destroy_window(MLX_PTR, WIN_PTR);
		if (HW == 1)
		{
			ft_putstr_fd("State: properly closing help window.\n", 2);
			mlx_destroy_window(MLX_PTR, HW_PTR);
		}
		if (IMG_DATA != NULL)
			free(IMG_DATA);
		free(list);
		list = NULL;
	}
	ft_putstr_fd("State: fractol is now quitting properly.\n", 2);
	exit(0);
	return (0);
}

void	change_frct(int key, t_mlx *list)
{
	if (key == 126)
		FCT++;
	if (key == 125)
		FCT--;
	if (FCT > 3)
		FCT = 1;
	if (FCT < 1)
		FCT = 3;
	lets_scale(list);
	mouse_wheel(1, DIFFX, DIFFY, list);
	init_repeatable_var(list);
	image_replacer(list);
}

void	julia_lock(t_mlx *list)
{
	if (FCT == 2)
	{
		if (LOCK == 1)
		{
			ft_putstr_fd("State: Mouse motion enabled for Julia.\n", 2);
			LOCK = 0;
		}
		else if (LOCK == 0)
		{
			ft_putstr_fd("State: Mouse motion disabled for Julia.\n", 2);
			LOCK = 1;
		}
	}
}

void	change_palet(int key, t_mlx *list)
{
	if (key == 124)
		PALET += 1;
	if (key == 123)
		PALET -= 1;
	if (PALET > 4)
		PALET = 0;
	if (PALET < 0)
		PALET = 4;
	init_repeatable_var(list);
	image_replacer(list);
}

int		key_manager(int key, void *list)
{
	if (key == 53 || key == 12)
		window_closed(list);
	else if (key == 124 || key == 123)
		change_palet(key, list);
	else if (key == 126 || key == 125)
		change_frct(key, list);
	else if (key == 37)
		julia_lock(list);
	else if (key == 40)
		receive_window_event(list);
	else if (key == 34)
		iter_upper(list);
	return (0);
}
