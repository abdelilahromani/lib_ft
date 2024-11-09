/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:19:14 by aromani           #+#    #+#             */
/*   Updated: 2024/11/09 22:34:16 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	size;

	size = ft_lstsize(lst);
	i = 0;
	while (lst != NULL)
	{
		if (i == size - 1)
		{
			return (lst->content);
		}
		i++;
		lst = lst->next;
	}
	return ((t_list *)0);
}

// int main(void)
// {
// 	t_list	*p;
// 	p = NULL;
// 	ft_lstadd_front(&p,ft_lstnew("ihfif"));
// 	ft_lstadd_front(&p,ft_lstnew("4"));
// 	ft_lstadd_front(&p,ft_lstnew("3"));
// 	ft_lstadd_front(&p,ft_lstnew("2"));
// 	ft_lstadd_front(&p,ft_lstnew("1"));
// 	printf("%s",(char *)ft_lstlast(p));
// }