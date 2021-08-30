/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:06:46 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/10 10:01:50 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	if (dst2 > src2)
	{
		while (len)
		{
			len--;
			dst2[len] = src2[len];
		}
	}
	if (dst2 <= src2)
		ft_memcpy(dst2, src2, len);
	return ((void *)dst);
}
