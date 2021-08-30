/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:34:55 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/08 20:01:41 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int j;
	int len;
	int res;

	j = 0;
	len = 1;
	res = 0;
	while (str[j] == ' ' || str[j] == '\n' || str[j] == '\t' || str[j] == '\r'
			|| str[j] == '\f' || str[j] == '\v')
		j++;
	if (str[j] == '-')
		len = -1;
	if (str[j] == '-' || str[j] == '+')
		j++;
	while (str[j] && str[j] >= '0' && str[j] <= '9')
	{
		res = (res * 10) + (str[j] - '0');
		j++;
	}
	return (res * len);
}
