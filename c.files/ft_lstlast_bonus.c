/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:19:14 by aromani           #+#    #+#             */
/*   Updated: 2024/11/12 22:44:37 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	size;

	if (!lst)
		return (NULL);
	size = ft_lstsize(lst);
	i = 0;
	while (lst != NULL && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
