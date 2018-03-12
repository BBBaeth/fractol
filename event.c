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
	if (FCT > 2)
		FCT = 1;
	if (FCT < 1)
		FCT = 2;
	init_repeatable_var(list);
	image_replacer(list);
}

void	change_palet(int key, t_mlx *list)
{
	if (key == 124)
		PALET += 1;
	if (key == 123)
		PALET -= 1;
	if (PALET > 3)
		PALET = 0;
	if (PALET < 0)
		PALET = 3;
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
	return (0);
}
