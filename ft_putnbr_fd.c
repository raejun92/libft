/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:02:34 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/21 16:02:36 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	ln;

	ln = n;
	if (n < 0)
	{
		ln = -1 * (long long)n;
		write(fd, "-", 1);
	}
	if (ln >= 10)
		ft_putnbr_fd((ln / 10), fd);
	ft_putchar_fd((ln % 10) + '0', fd);
}
