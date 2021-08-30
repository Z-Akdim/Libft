/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 20:07:35 by zakdim            #+#    #+#             */
/*   Updated: 2019/11/10 08:56:44 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strcon(int con, long n2, char *str)
{
	int			neg;

	neg = 0;
	if (n2 < 0)
	{
		n2 = n2 * (-1);
		neg = 1;
	}
	while (con >= 0)
	{
		str[con] = n2 % 10 + '0';
		n2 = n2 / 10;
		con--;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}

static int		ft_num(long n2)
{
	int			con;

	con = 0;
	if (n2 < 0)
	{
		n2 = n2 * (-1);
		con++;
	}
	while (n2 > 9)
	{
		n2 = n2 / 10;
		con++;
	}
	con++;
	return (con);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			con;
	int			sign;
	long		n2;

	sign = 0;
	n2 = (long)n;
	con = ft_num(n2);
	str = (char*)malloc((con + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	str[con] = '\0';
	con--;
	return (ft_strcon(con, n2, str));
}
