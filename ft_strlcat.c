/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:28:02 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/10 10:26:21 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int len;

	i = 0;
	len = ft_strlen(dst);
	while ((i + len + 1) < (int)size && src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	if ((int)size > len)
	{
		dst[len + i] = '\0';
		return (len + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
