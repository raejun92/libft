/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:03:06 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/21 18:12:12 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	c_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	cnt;

	cnt = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
			cnt++;
		i++;
	}
	return (cnt);
}

static char			*start_str(char const *s, char c, unsigned int check)
{
	unsigned int	i;
	unsigned int	cnt;

	cnt = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
			cnt++;
		if (check == cnt)
			return ((char *)&s[i]);
		i++;
	}
	return ((char *)s);
}

static unsigned int	str_l(char const *s, char c, unsigned int check)
{
	unsigned int	i;
	unsigned int	cnt;
	unsigned int	j;

	cnt = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
			cnt++;
		if (check == cnt)
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			return (j - i);
		}
		i++;
	}
	return (i);
}

static char			**m_free(char **str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}

char				**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	i;
	unsigned int	f_l;
	unsigned int	s_l;
	char			*str_s;

	if (!s)
		return (0);
	f_l = c_count(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (f_l + 1))))
		return (0);
	i = 0;
	while (i < f_l)
	{
		str_s = start_str(s, c, (i + 1));
		s_l = str_l(s, c, (i + 1));
		if (!(str[i] = (char *)malloc(sizeof(char) * (s_l + 1))))
			return (m_free(str));
		ft_strlcpy(str[i], str_s, (s_l + 1));
		i++;
	}
	str[f_l] = 0;
	return (str);
}
