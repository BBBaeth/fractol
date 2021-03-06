/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 13:26:30 by ceugene           #+#    #+#             */
/*   Updated: 2018/05/15 14:56:42 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "./minilibx_macos/mlx.h"
# include "./libft/libft.h"
# include <stdlib.h>
# include <math.h>

# define MLX_PTR list->mlx_ptr
# define WIN_PTR list->win_ptr
# define IMG_PTR list->img_ptr
# define IMG_DATA list->img_data
# define LA list->l
# define HA list->h
# define NAME list->read_this
# define FCT list->fractal_mode
# define BPP list->bit_pix
# define S_L list->size_line
# define END list->endian
# define KD list->keys
# define ITR list->iteration
# define X list->x_ptr
# define Y list->y_ptr
# define ITRMAX list->imax
# define ZOOM_X list->zoomx
# define ZOOM_Y list->zoomy
# define O_A list->a_orgn
# define O_B list->b_orgn
# define ZI list->z_ir
# define ZR list->z_r
# define CI list->c_ir
# define CR list->c_r
# define SIZE list->size_mode
# define JUL_X list->c_x
# define JUL_Y list->c_y
# define PALET list->color_mode
# define DIFFX list->diffx
# define DIFFY list->diffy
# define MINX list->minix
# define MINY list->miny
# define MAXX list->max
# define MAXY list->maxy
# define LOCK list->julock
# define HW_PTR list->hw_ptr
# define CLRT list->tabcolor
# define FLOW list->flower

typedef struct			s_color
{
	int					r;
	int					g;
	int					b;
}						t_color;

typedef struct			s_mlx
{
	void				*mlx_ptr;
	void				*win_ptr;
	void				*img_ptr;
	char				*img_data;
	char				*read_this;
	long				l;
	long				h;
	long				fractal_mode;
	int					bit_pix;
	int					size_line;
	int					endian;
	int					keys;
	long				iteration;
	long				imax;
	long				distance;
	double				a_orgn;
	double				b_orgn;
	double				x_ptr;
	double				y_ptr;
	double				z_ir;
	double				z_r;
	double				zoomx;
	double				zoomy;
	double				c_ir;
	double				c_r;
	long				size_mode;
	int					color_mode;
	double				diffx;
	double				diffy;
	double				c_x;
	double				c_y;
	double				minix;
	double				miny;
	double				max;
	double				maxy;
	double				zoom;
	int					julock;
	void				*hw_ptr;
	t_color				*tabcolor;
	int					flower;
}						t_mlx;

void					ft_fail(char *str);
t_mlx					*mlx_new(void);
int						window_closed(t_mlx *list);
void					lets_draw_mand(t_mlx *list);
void					lets_draw_julia(t_mlx *list);
void					lets_draw_ship(t_mlx *list);
void					lets_draw_brain(t_mlx *list);
void					lets_draw_hiroshima(t_mlx *list);
void					lets_draw_paque(t_mlx *list);
void					lets_draw_lizard(t_mlx *list);
void					lets_draw_snake(t_mlx *list);
void					set_it_black(int pos, int x, int y, t_mlx *list);
void					get_white(int x, int y, t_mlx *list, t_color color);
void					get_colored(int x, int y, t_mlx *list);
int						key_manager(int key, void *list);
void					lets_scale(t_mlx *list);
void					ft_iterative(t_mlx *list);
int						reload_pic(t_mlx *list);
void					let_mlx_loop(t_mlx *list);
void					fractal_generating(t_mlx *list);
void					image_replacer(t_mlx *list);
void					init_repeatable_var(t_mlx *list);
int						mouse_move(int x, int y, t_mlx *list);
int						mouse_wheel(int button, int x, int y, t_mlx *list);
void					help_window(t_mlx *list);
void					ft_init_var3(t_mlx *list);
int						window_info_display(t_mlx *list);
void					iter_upper(t_mlx *list);
void					ft_usage(void);
t_color					*malloc_tab(void);
void					color_distributor(t_mlx *list);
t_color					color_attibutor(t_color tab, int r, int g, int b);
void					starry_sky(t_mlx *list);
void					healthy_earthy(t_mlx *list);
void					soft_macaroni(t_mlx *list);
void					fifty_shades_of_fractol(t_mlx *list);
void					fractol_online(t_mlx *list);
void					flower_mode(t_mlx *list);
void					move_side(int key, t_mlx *list);
int						key_pressed(int key, t_mlx *list);
void					ft_iterative_2(t_mlx *list);
void					fractal_name_redirect(char **argv, t_mlx *list);

#endif
