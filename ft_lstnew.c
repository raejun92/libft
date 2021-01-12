/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juchoi <juchoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:41:29 by juchoi            #+#    #+#             */
/*   Updated: 2021/01/13 00:09:38 by juchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_listnew(void *content)
{
	t_list	*n_list;

	if (!(n_list = (t_list *)malloc(sizeof(t_list))))
		return (0);
	n_list->content = content;
	n_list->next = 0;
	return (n_list);
}
