/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:56:00 by zakdim            #+#    #+#             */
/*   Updated: 2019/10/30 09:29:36 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			j;
	char			*dst2;
	char			*src2;
	unsigned char	c2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	c2 = (unsigned char)c;
	j = 0;
	while (j < n)
	{
		dst2[j] = src2[j];
		if (c2 == (unsigned char)src2[j])
			return (dst + j + 1);
		j++;
	}
	return (NULL);
}
