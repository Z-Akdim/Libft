/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 17:21:34 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/10 08:53:41 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		retur(char c1, const char *c2)
{
	int			i;

	i = 0;
	while (c2[i])
	{
		if (c1 == c2[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*con;
	size_t		len;
	size_t		i;

	i = 0;
	if (!s1 || !set)
		return (0);
	con = ft_strdup(s1);
	if (con == 0)
		return (0);
	while (retur(con[i], set) == 1)
		i++;
	len = ft_strlen(con) - 1;
	while (len > 0)
	{
		if (retur(con[len], set) == 0)
			break ;
		con[len] = '\0';
		len--;
	}
	return (ft_strdup(con + i));
}
