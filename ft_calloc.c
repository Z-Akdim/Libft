/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:55:45 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/04 20:47:14 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*hep;

	hep = (void*)malloc(count * size);
	if (hep == NULL)
		return (NULL);
	ft_bzero(hep, count * size);
	return (hep);
}
