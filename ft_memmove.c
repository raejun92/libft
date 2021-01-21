/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:01:35 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/21 16:01:36 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*str1;
	unsigned char			*str2;
	size_t					i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (dst == src || !len)
		return (dst);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (dst < src)
		while (i < len)
		{
			str1[i] = str2[i];
			i++;
		}
	else
		while (i < len)
		{
			str1[len - 1] = str2[len - 1];
			len--;
		}
	return (dst);
}
