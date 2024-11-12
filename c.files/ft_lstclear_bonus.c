/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:52:58 by aromani           #+#    #+#             */
/*   Updated: 2024/11/12 22:44:14 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	if (!lst || !(*lst) || !del)
		return ;
	node = *lst;
	while (node != NULL)
	{
		tmp = node;
		node = node->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
