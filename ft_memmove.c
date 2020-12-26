/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 20:24:42 by juchoi            #+#    #+#             */
/*   Updated: 2020/12/26 22:59:32 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*str1;
	const unsigned char		*str2;
	size_t					i;

	i = 0;
	str1 = dst;
	str2 = src;
	if (dst < src)
		while (i < len)
		{
			str1[i] = str2[i];
			i++;
		}
	else
		while (i < len)
		{
			str1[len - 1] = srt2[len - 1];
			len--;
		}
	return (dst);
}
