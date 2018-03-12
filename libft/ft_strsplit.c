/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:21:19 by ceugene           #+#    #+#             */
/*   Updated: 2017/11/16 14:16:53 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_number(char const *s, char c)
{
	int		select;
	int		words;

	select = 0;
	words = 0;
	if (ft_strcmp("", s) == 0)
		return (1);
	while (s[select])
	{
		while (s[select] == c)
			select++;
		if (s[0] != c || (s[select] != c && s[select - 1] == c))
			words++;
		select++;
	}
	return (words);
}

static int		ft_new_word(char const *s, char c, int select)
{
	if (s[select] != c && select == 0)
		return (1);
	if (s[select] != c && s[select - 1] == c)
		return (1);
	else
		return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		select;
	int		len;
	int		word;

	select = 0;
	word = 0;
	if (s == NULL
		|| !(tab = (char **)(malloc(sizeof(char*) * ft_word_number(s, c) + 1))))
		return (NULL);
	while (ft_strcmp("", s) != 0 && (s[select] && word < ft_word_number(s, c)))
	{
		len = 0;
		while (s[select] == c)
			select++;
		if (ft_new_word(s, c, select) == 1)
		{
			while (s[select + len] != c && s[select + len] != '\0')
				len++;
			tab[word++] = ft_strsub(s, select, len);
		}
		select++;
	}
	tab[word] = NULL;
	return (tab);
}
