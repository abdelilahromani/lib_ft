/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:01:59 by aromani           #+#    #+#             */
/*   Updated: 2024/11/04 15:36:44 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *p;

    p = (char *)s;
    i = 0;
    while(i < n)
    {
        if(p[i] == c)
            return ((void *)&s[i]);
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char str[] = "abd1lla";
//     //char to_find = "1";

//     printf("%s \n",memchr(str, '1', 6));
//     printf("%s",ft_memchr(str, '1', 6));
// }