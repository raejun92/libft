/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:29:00 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/13 16:21:34 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		p = *lst;
		while (p->next)
			p = p->next;
		p->next = new;
	}
	else
		*lst = new;
}
