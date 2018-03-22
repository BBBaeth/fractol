#include "fractol.h"

t_color		color_attibutor(t_color tab, int r, int g, int b)
{
	tab.r = r;
	tab.g = g;
	tab.b = b;
	return (tab);
}

void		color_distributor(t_mlx *list)
{
	if (PALET == 0)
		starry_sky(list);
	if (PALET == 1)
		healthy_earthy(list);
	if (PALET == 2)
		soft_macaroni(list);
	if (PALET == 3)
		fifty_shades_of_fractol(list);
	if (PALET == 4)
		fractol_online(list);
}

t_color		*malloc_tab(void)
{
	t_color		*new;

	if (!(new = (t_color *)malloc(sizeof(t_color) * 15)))
		ft_fail("Error: Could not allocate memory.");
	return (new);
}
