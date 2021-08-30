/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:52:43 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/09 16:38:38 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ab;
	size_t	i;

	i = 0;
	if (s == 0)
		return (NULL);
	if (start > len)
		return (ft_strdup(""));
	ab = (char *)malloc((len + 1) * sizeof(char));
	if (ab == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		ab[i] = s[start + i];
		i++;
	}
	ab[i] = '\0';
	return (ab);
}
