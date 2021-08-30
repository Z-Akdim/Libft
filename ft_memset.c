/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:08:38 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/06 19:55:55 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	az;
	unsigned char	*b1;
	size_t			i;

	i = 0;
	az = (unsigned char)c;
	b1 = (unsigned char *)b;
	while (i < len)
	{
		b1[i] = az;
		i++;
	}
	return (b);
}
