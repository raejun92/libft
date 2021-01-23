/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:00:09 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/23 15:17:17 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*n_node;
	t_list	*pre_node;

	if (!lst || !f)
		return (0);
	n_lst = 0;
	n_node = 0;
	pre_node = 0;
	if (!(n_lst = ft_lstnew((*f)(lst->content))))
		return (0);
	lst = lst->next;
	while (lst)
	{
		if (!(n_node = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&n_lst, del);
			return (0);
		}
		pre_node = n_node;
		ft_lstadd_back(&n_lst, pre_node);
		lst = lst->next;
	}
	return (n_lst);
}
