/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:55 by aromani           #+#    #+#             */
/*   Updated: 2024/11/12 22:44:45 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*node;
	t_list *tmp;

	if (!lst || !del || !f)
		return (NULL);
	l = NULL;
	tmp = lst;
	while (tmp)
	{
		node = ft_lstnew (NULL);
		if (!node)
		{
			ft_lstclear(&l, del);
			return (NULL);
		}
		node->content = f(tmp->content);
		ft_lstadd_back (&l, node);
		tmp = tmp->next;
	}
	return (l);
}
