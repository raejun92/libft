/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 20:54:21 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/07 17:37:17 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	s1_l;
	unsigned int	s2_l;

	s1_l = ft_strlen(s1);
	s2_l = ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (s1_l + s2_l + 1))))
		return (0);
	ft_strlcpy(str, s1, s1_l + 1);
	ft_strlcat(str, s2, (s1_l + s2_l + 1));
	return (str);
}
