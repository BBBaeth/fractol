/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:23:32 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 16:20:35 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int				i;
	unsigned int	spaces;
	unsigned int	start;

	spaces = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	spaces = i;
	start = spaces;
	while (s[i])
		i++;
	while (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n')
	{
		spaces++;
		if (i - 1 == 0 || ft_strlen(s) - (int)spaces <= 0)
			return (ft_strdup(""));
		i--;
	}
	if (spaces == 0 && ft_strlen(s) > 0)
		return (ft_strdup(s));
	return (ft_strsub(s, start, ft_strlen(s) - (int)spaces));
}
