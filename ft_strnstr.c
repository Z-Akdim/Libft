/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:40:08 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/08 14:06:06 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (haystack == NULL && len == 0)
		return (NULL);
	if (needle[i] == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 1;
		if (haystack[i] == needle[0])
		{
			while (needle[j] && needle[j] == haystack[j + i] && i + j < len)
				j++;
			if (needle[j] == '\0' && i + j <= len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
