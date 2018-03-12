/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:09:09 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 13:56:43 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_fill(char *str, int nb, int isneg, int count)
{
	if (nb == 2147483647)
		return (ft_strdup("2147483647"));
	if (nb == 0)
		return (ft_strdup("0"));
	if (isneg == 1)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb >= 1)
	{
		str[count] = nb % 10 + '0';
		nb = nb / 10;
		count--;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char	*nbr;
	int		nb;
	int		count;
	int		isneg;

	isneg = 0;
	count = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nb = n;
	if (n < 0)
	{
		n = -n;
		count++;
		isneg = 1;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	if (!(nbr = (char *)malloc(sizeof(char) * count + 1)))
		return (NULL);
	nbr[count] = '\0';
	return (ft_fill(nbr, nb, isneg, count - 1));
}
