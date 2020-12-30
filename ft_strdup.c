/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:01:55 by juchoi            #+#    #+#             */
/*   Updated: 2020/12/30 22:02:37 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		l;
	int		i;
	char	*str;

	l = ft_strlen(s1);
	if (!(str = (char *)malloc(sizeof(char) * (l + 1))))
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
