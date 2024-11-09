/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:52:58 by aromani           #+#    #+#             */
/*   Updated: 2024/11/09 22:32:41 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	while (node != NULL)
	{
		tmp = node;
		del(tmp->content);
		free(tmp);
		node = node->next;
	}
	*lst = NULL;
}

// void test(void *s)
// {
// 	free(s);
// }
// int main()
// {
// 	t_list	*node;
// 	node = NULL;
// 	ft_lstadd_front(&node,ft_lstnew("10"));
// 	ft_lstadd_front(&node,ft_lstnew("10"));
// 	//ft_lstclear(&node,&test);
// 	while (node != NULL)
// 	{
// 		printf("before   %s",node->content);
// 		node = node->next;
// 	}
// }