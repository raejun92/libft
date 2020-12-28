/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 17:33:38 by juchoi            #+#    #+#             */
/*   Updated: 2020/12/27 20:20:38 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdilb.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	i;

	i = 0;
	dst_l = 0;
	src_l = 0;
	while (src[src_l])
		src_l++;
	if (dstsize == 0)
		return (src_l);
	while (dst[dst_l])
		dst_l++;
	if (size <= dst_l)
		return (src_l + dstsize);
	while (dst_l + i + 1 < dstsize && src[i])
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return (src_l + dst_l);
}
