/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:00:52 by aromani           #+#    #+#             */
/*   Updated: 2024/11/09 15:46:56 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}

// void test(void *s)
// {
// 	char *str = (char *)s;
// 	str[0] = '2';
// 	str[1] = '3';
// }

// int main()
// {
// 	t_list *node;
	
// 	node = NULL;
// 	ft_lstadd_front(&node,ft_lstnew(ft_strdup("30")));
// 	ft_lstadd_front(&node,ft_lstnew(ft_strdup("30")));
// 	ft_lstiter(node,&test);

// 	while(node != NULL)
// 	{
// 		printf("%s \n",node->content);
// 		node = node->next;
// 	}
// }