/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:46:27 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/10 09:57:04 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;
	size_t	i;

	i = 0;
	if (dst || src)
	{
		dst1 = (char *)dst;
		src1 = (char *)src;
		while (i < n)
		{
			dst1[i] = src1[i];
			i++;
		}
		return (dst);
	}
	return (0);
}
