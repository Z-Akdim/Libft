/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 19:09:17 by zakdim            #+#    #+#             */
/*   Updated: 2019/10/30 14:52:29 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c2;
	int		ab;
	char	*s2;

	c2 = (char)c;
	s2 = (char *)s;
	ab = ft_strlen(s2);
	if (c2 == '\0')
		return (s2 + ab);
	while (ab >= 0)
	{
		if (s2[ab] == c2)
			return (s2 + ab);
		ab--;
	}
	return (NULL);
}
