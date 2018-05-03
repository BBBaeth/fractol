/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palets.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:24:13 by ceugene           #+#    #+#             */
/*   Updated: 2018/03/30 14:24:22 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		starry_sky(t_mlx *list)
{
	CLRT[0] = color_attibutor(CLRT[0], 66, 30, 15);
	CLRT[1] = color_attibutor(CLRT[1], 25, 7, 26);
	CLRT[2] = color_attibutor(CLRT[2], 9, 1, 47);
	CLRT[3] = color_attibutor(CLRT[3], 4, 4, 73);
	CLRT[4] = color_attibutor(CLRT[4], 0, 7, 100);
	CLRT[5] = color_attibutor(CLRT[5], 12, 44, 138);
	CLRT[6] = color_attibutor(CLRT[6], 24, 82, 177);
	CLRT[7] = color_attibutor(CLRT[7], 57, 125, 209);
	CLRT[8] = color_attibutor(CLRT[8], 134, 181, 229);
	CLRT[9] = color_attibutor(CLRT[9], 211, 236, 248);
	CLRT[10] = color_attibutor(CLRT[10], 241, 233, 191);
	CLRT[11] = color_attibutor(CLRT[11], 248, 201, 95);
	CLRT[12] = color_attibutor(CLRT[12], 255, 170, 0);
	CLRT[13] = color_attibutor(CLRT[13], 204, 128, 0);
	CLRT[14] = color_attibutor(CLRT[14], 153, 87, 0);
}

void		healthy_earthy(t_mlx *list)
{
	CLRT[0] = color_attibutor(CLRT[0], 244, 133, 105);
	CLRT[1] = color_attibutor(CLRT[1], 255, 107, 92);
	CLRT[2] = color_attibutor(CLRT[2], 253, 92, 84);
	CLRT[3] = color_attibutor(CLRT[3], 220, 64, 68);
	CLRT[4] = color_attibutor(CLRT[4], 194, 52, 64);
	CLRT[5] = color_attibutor(CLRT[5], 151, 35, 56);
	CLRT[6] = color_attibutor(CLRT[6], 131, 27, 54);
	CLRT[7] = color_attibutor(CLRT[7], 129, 25, 52);
	CLRT[8] = color_attibutor(CLRT[8], 158, 36, 57);
	CLRT[9] = color_attibutor(CLRT[9], 174, 42, 59);
	CLRT[10] = color_attibutor(CLRT[10], 226, 67, 72);
	CLRT[11] = color_attibutor(CLRT[11], 255, 95, 90);
	CLRT[12] = color_attibutor(CLRT[12], 255, 121, 98);
	CLRT[13] = color_attibutor(CLRT[13], 244, 152, 115);
	CLRT[14] = color_attibutor(CLRT[14], 255, 136, 109);
}

void		soft_macaroni(t_mlx *list)
{
	CLRT[0] = color_attibutor(CLRT[0], 33, 1, 22);
	CLRT[1] = color_attibutor(CLRT[1], 2, 23, 52);
	CLRT[2] = color_attibutor(CLRT[2], 2, 15, 47);
	CLRT[3] = color_attibutor(CLRT[3], 1, 30, 57);
	CLRT[4] = color_attibutor(CLRT[4], 5, 47, 69);
	CLRT[5] = color_attibutor(CLRT[5], 16, 73, 80);
	CLRT[6] = color_attibutor(CLRT[6], 45, 117, 103);
	CLRT[7] = color_attibutor(CLRT[7], 73, 149, 119);
	CLRT[8] = color_attibutor(CLRT[8], 109, 186, 140);
	CLRT[9] = color_attibutor(CLRT[9], 129, 204, 148);
	CLRT[10] = color_attibutor(CLRT[10], 166, 230, 170);
	CLRT[11] = color_attibutor(CLRT[11], 187, 242, 179);
	CLRT[12] = color_attibutor(CLRT[12], 129, 204, 148);
	CLRT[13] = color_attibutor(CLRT[13], 61, 136, 113);
	CLRT[14] = color_attibutor(CLRT[14], 3, 35, 63);
}

void		fifty_shades_of_fractol(t_mlx *list)
{
	CLRT[0] = color_attibutor(CLRT[0], 34, 82, 130);
	CLRT[1] = color_attibutor(CLRT[1], 15, 98, 128);
	CLRT[2] = color_attibutor(CLRT[2], 2, 116, 127);
	CLRT[3] = color_attibutor(CLRT[3], 4, 133, 127);
	CLRT[4] = color_attibutor(CLRT[4], 28, 170, 127);
	CLRT[5] = color_attibutor(CLRT[5], 105, 210, 129);
	CLRT[6] = color_attibutor(CLRT[6], 184, 236, 128);
	CLRT[7] = color_attibutor(CLRT[7], 249, 254, 126);
	CLRT[8] = color_attibutor(CLRT[8], 235, 251, 129);
	CLRT[9] = color_attibutor(CLRT[9], 214, 244, 126);
	CLRT[10] = color_attibutor(CLRT[10], 154, 225, 127);
	CLRT[11] = color_attibutor(CLRT[11], 104, 209, 127);
	CLRT[12] = color_attibutor(CLRT[12], 69, 195, 128);
	CLRT[13] = color_attibutor(CLRT[13], 30, 171, 128);
	CLRT[14] = color_attibutor(CLRT[14], 3, 115, 130);
}

void		fractol_online(t_mlx *list)
{
	CLRT[0] = color_attibutor(CLRT[0], 40, 3, 11);
	CLRT[1] = color_attibutor(CLRT[1], 61, 11, 4);
	CLRT[2] = color_attibutor(CLRT[2], 106, 36, 4);
	CLRT[3] = color_attibutor(CLRT[3], 145, 68, 14);
	CLRT[4] = color_attibutor(CLRT[4], 165, 87, 23);
	CLRT[5] = color_attibutor(CLRT[5], 196, 118, 46);
	CLRT[6] = color_attibutor(CLRT[6], 209, 140, 62);
	CLRT[7] = color_attibutor(CLRT[7], 221, 154, 75);
	CLRT[8] = color_attibutor(CLRT[8], 239, 182, 104);
	CLRT[9] = color_attibutor(CLRT[9], 252, 225, 159);
	CLRT[10] = color_attibutor(CLRT[10], 250, 249, 201);
	CLRT[11] = color_attibutor(CLRT[11], 231, 255, 233);
	CLRT[12] = color_attibutor(CLRT[12], 250, 249, 201);
	CLRT[13] = color_attibutor(CLRT[13], 254, 225, 158);
	CLRT[14] = color_attibutor(CLRT[14], 231, 171, 91);
}
