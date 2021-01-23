/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 17:35:16 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/23 02:28:54 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*str_d;
	const unsigned char		*str_s;
	size_t					i;

	i = 0;
	str_d = (unsigned char *)dst;
	str_s = (const unsigned char *)src;
	while (i < n)
	{
		str_d[i] = str_s[i];
		if (str_s[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
