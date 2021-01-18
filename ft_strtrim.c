/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:35:10 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/19 00:44:30 by juchoi           ###   ########.fr       */
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
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		if (start >= end)
			return (ft_strdup(""));
		start++;
	}
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	if (!(str = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (0);
	ft_strlcpy(str, (s1 + start), (end - start + 1));
	return (str);
}
