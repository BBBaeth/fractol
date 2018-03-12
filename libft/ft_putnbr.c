/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:12:31 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:07:25 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		count;
	int		nb;

	count = 1;
	if (n == 2147483647 || n == -2147483648)
	{
		n == 2147483647 ? ft_putstr("2147483647") : ft_putstr("-2147483648");
		count = 0;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	nb = n;
	while (n >= 10 && n != 0)
	{
		n = n / 10;
		count = count * 10;
	}
	while (count > 0)
	{
		ft_putchar((nb / count) % 10 + '0');
		count = count / 10;
	}
}
