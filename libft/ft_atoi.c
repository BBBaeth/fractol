/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:07:21 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 16:41:28 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				s;
	unsigned int	result;
	int				levier;

	s = 0;
	result = 0;
	levier = 1;
	while (str != NULL && (str[s] == '\f' || str[s] == '\n' || str[s] == ' '
		|| str[s] == '\t' || str[s] == '\r' || str[s] == '\v'))
		s++;
	if (str[s] == '-' && str != NULL)
		levier = -1;
	if (str[s] == '-' || (str[s] == '+' && str != NULL))
		s++;
	while (str != NULL && str[s] >= '0' && (str[s] <= '9'))
	{
		result = result * 10;
		result = result + str[s] - '0';
		s++;
	}
	return ((int)result * levier);
}
