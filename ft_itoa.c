/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:37:21 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/06 15:38:22 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_intlen(int n)
{
	int i;

	i = 0;
    while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (n <= 0)
		i + 1;
	return (i);
}

char	*ft_itoa(int n)
{
    char    *str;
    int     len;
	int		i;

    len = ft_intlen(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	str[len] = '\0';
	i = 0;
	if (n < 0)
	{
		n = n * -1;
		str[i++] = '-';
	}
	while (i <= len)
	{
			str[len] = (n % 10) + '0';
			n = n / 10;
			len--;
	}
	return (str);
}
