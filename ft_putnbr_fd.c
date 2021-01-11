/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:03:39 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/11 13:18:45 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	ln;

	ln = n;
	if (ln > 2147483647 || ln < -2147483648)
		return ;
	if (n < 0)
    {
        ln = -1 * (long long)n;
        write(fd, "-", 1);
    }
    if (ln >= 10)
        ft_putnbr_fd((ln / 10), fd);
    ft_putchar_fd((ln % 10) + '0', fd);
}
