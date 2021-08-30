/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:01:06 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/10 09:14:00 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mm;
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	if (s1 && s2)
	{
		i = ft_strlen(s1) + ft_strlen(s2);
		mm = (char*)malloc((i + 1) * sizeof(char));
		if (mm == 0)
			return (0);
		i = 0;
		while (s1[i])
			mm[j++] = s1[i++];
		while (s2[k])
			mm[j++] = s2[k++];
		mm[j] = '\0';
		return (mm);
	}
	return (NULL);
}
