/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:09:58 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/10 08:55:08 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**free_thing(char **tab, int index)
{
	while (index >= 0)
	{
		free(tab[index]);
		index--;
	}
	free(tab);
	return (NULL);
}

static	int			counw(char *ptr, char c)
{
	int				i;
	int				count;

	i = 0;
	count = 0;
	while (ptr[i])
	{
		if (ptr[i] == c && ptr[i + 1] != c)
			count++;
		i++;
	}
	return (count + 1);
}

static char			*copi(int nn, int ii, char *ptr)
{
	int				k;
	char			*p;

	k = 0;
	p = (char *)malloc(sizeof(char) * (nn + 1));
	while (nn > k)
	{
		p[k] = ptr[k + ii];
		k++;
	}
	p[k] = '\0';
	return (p);
}

char				**ft_split(char const *s, char c)
{
	int				index;
	char			**str;
	int				i;
	int				n;
	char			*ptr;

	if (!(ptr = ft_strtrim(s, &c)) ||
			!(str = (char **)malloc(sizeof(char*) * (counw(ptr, c) + 1))))
		return (0);
	i = 0;
	index = -1;
	while (ptr[i])
	{
		while (ptr[i] == c)
			i++;
		n = 0;
		while (ptr[i + n] != c && ptr[i + n])
			n++;
		if (!(str[++index] = copi(n, i, ptr)))
			return (free_thing(str, index));
		i = n + i;
	}
	str[index + 1] = NULL;
	free(ptr);
	return (str);
}
