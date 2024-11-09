/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:43:20 by aromani           #+#    #+#             */
/*   Updated: 2024/11/07 19:18:55 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list *node;
	
// 	node = NULL;
// 	ft_lstadd_front(&node,ft_lstnew("9"));
// 	ft_lstadd_front(&node,ft_lstnew("4"));
// 	ft_lstadd_front(&node,ft_lstnew("3"));
// 	ft_lstadd_front(&node,ft_lstnew("2"));
// 	ft_lstadd_front(&node,ft_lstnew("1"));
// 	int i = ft_lstsize(node);
// 	while (node != NULL)
// 	{
// 		printf("%s \n",(char *) node->content);
// 		node = node->next;
// 	}
// 	printf("%d",i);
// }
