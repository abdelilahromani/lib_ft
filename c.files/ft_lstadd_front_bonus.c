/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:20:48 by aromani           #+#    #+#             */
/*   Updated: 2024/11/07 18:26:20 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*node;

// 	node = malloc(sizeof(t_list));
// 	node->content = "abdelilah";
// 	node->next = malloc(sizeof(t_list));
// 	node->next->content = "romani";
// 	node->next->next = NULL;
// 	ft_lstadd_front(&node,ft_lstnew("omari"));
// 	while (node != NULL)
// 	{
// 		printf("%s \n",(char *) node->content);
// 		node = node->next;
// 	}
// }
