/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:32:50 by aromani           #+#    #+#             */
/*   Updated: 2024/11/09 12:27:42 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *node;

    node = *lst;
    while (node && node->next)
        node = node->next;
    if (!node)
    {
        *lst = new;
        return;
    }
    node->next = new;
    new->next = NULL;

}

// int main(void)
// {
//     t_list *node;

//     node = NULL;
// 	ft_lstadd_back(&node,ft_lstnew("9"));
// 	ft_lstadd_back(&node,ft_lstnew("4"));
// 	ft_lstadd_back(&node,ft_lstnew("3"));
// 	ft_lstadd_back(&node,ft_lstnew("2"));
// 	ft_lstadd_back(&node,ft_lstnew("1"));
//     // ft_lstadd_back(&node,ft_lstnew("iuwgfugfiu"));

//     while (node != NULL)
//     {
//         printf("%s  \n",(char *)node->content);
//         node = node->next;
//     }
// }