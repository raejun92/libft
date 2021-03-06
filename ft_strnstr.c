/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:05:52 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/23 15:56:53 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h_l;
	size_t n_l;
	size_t i;

	if (*needle == 0)
		return ((char *)haystack);
	h_l = ft_strlen(haystack);
	n_l = ft_strlen(needle);
	if (h_l < n_l || len < n_l)
		return (0);
	i = 0;
	while (haystack[i] && (n_l + i <= len))
	{
		if (haystack[i] == *needle && ft_memcmp(&haystack[i], needle, n_l) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
