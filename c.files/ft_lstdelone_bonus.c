/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:28:15 by aromani           #+#    #+#             */
/*   Updated: 2024/11/09 17:20:55 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free(lst);
}

void frrr(void *s)
{
    free(s);
}

// int main()
// {
//     t_list  *node;

//     node = NULL;
//     //ft_lstadd_front(&node,ft_lstnew(ft_strdup("306")));
//     ft_lstadd_front(&node,ft_lstnew(ft_strdup("55")));
//     ft_lstadd_front(&node,ft_lstnew(ft_strdup("80")));
//     ft_lstadd_front(&node,ft_lstnew(ft_strdup("60")));
//     ft_lstdelone(node,&frrr);
//     while(node != NULL)
//     {
//         printf("%s  \n",(char *)node->content);
//         node = node->next;
//     }
// }


