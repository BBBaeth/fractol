/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:12:41 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 12:12:12 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_max_min(int n, int fd)
{
	if (n > 0)
		ft_putstr_fd("2147483647", fd);
	else if (n < 0)
		ft_putstr_fd("-2147483648", fd);
	return (0);
}

void			ft_putnbr_fd(int n, int fd)
{
	int		count;
	int		nb;

	count = 1;
	if (n == 2147483647 || n == -2147483648)
		count = ft_max_min(n, fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
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
		ft_putchar_fd((nb / count) % 10 + '0', fd);
		count = count / 10;
	}
}
