/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:55:02 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/14 17:42:01 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
