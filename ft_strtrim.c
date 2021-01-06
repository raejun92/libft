/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:35:10 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/06 00:23:36 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (end)
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
			end--;
	if (start >= end)
		return (ft_strdup(""));
	if (!(str = (char *)malloc(sizeof(char) * end - start + 1)))
		return (0);
	ft_memcpy(str, s1 + start, (end - start));
	str[end] = '\0';
	return (str);
}