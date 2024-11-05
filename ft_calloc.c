/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:49:32 by aromani           #+#    #+#             */
/*   Updated: 2024/11/05 11:08:56 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr =   malloc(count * size);
    if (ptr == NULL)
        return (NULL);
    ft_memset(ptr,0,(count * size));
    return (ptr);
        
}


int main()
{
    int *ptr;
    ptr = ft_calloc(1,5); 
    int j = 0;
    while(j < 5)
        printf("%d",ptr[j++]);
    free(ptr);
}