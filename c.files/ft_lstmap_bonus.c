/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:55 by aromani           #+#    #+#             */
/*   Updated: 2024/11/09 22:35:53 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*node;

	if (!lst)
		return (NULL);
	l = NULL;
	while (lst)
	{
		node = ft_lstnew (f(lst->content));
		if (!node)
		{
			ft_lstclear(&l, del);
			return (NULL);
		}
		ft_lstadd_back (&l, node);
		lst = lst->next;
	}
	return (l);
}

// void test1(void *s)
// {
// 	free(s);
// }
// void *test2(void *s)
// {
// 	char *str = (char *)s;
// 	str[0] = '1';
// 	str[1] = '3';
// 	str[2] = '3';
// 	str[3] = '7';
// 	return((void *)str);
// }
// int main()
// {
// 	t_list	*node;
// 	t_list *newlist;
// 	node = NULL;
// 	ft_lstadd_front(&node,ft_lstnew(ft_strdup("10")));
// 	ft_lstadd_front(&node,ft_lstnew(ft_strdup("20")));
// 	ft_lstadd_front(&node,ft_lstnew(ft_strdup("30")));
// 	ft_lstadd_front(&node,ft_lstnew(ft_strdup("40")));
// 	ft_lstadd_front(&node,ft_lstnew(ft_strdup("50")));
// 	newlist = ft_lstmap(node,&test2,&test1);
// 	while (newlist != NULL)
// 	{
// 		printf("%s \n",(char *)newlist->content);
// 		newlist = newlist->next;
// 	}
// }