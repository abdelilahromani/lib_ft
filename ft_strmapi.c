/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:24:18 by aromani           #+#    #+#             */
/*   Updated: 2024/11/05 14:08:53 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned  int, char))
{
    char            *res;
    size_t          len;
    unsigned  int   i;

    len = ft_strlen(s);
    i = 0;
    res = malloc(len + 1);
    if (!res)
        return(NULL);
    while (s[i])
    {
        res[i] = (f)(i,s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}

// char test(unsigned int i,char p)
// {
//     p = 'a';
//     return (p);
// }


// int main()
// {
//     char (*ptr)(unsigned int i,char c);
//     ptr = &test;
//     char *ss = ft_strmapi("hi there",test);
//     printf("%s",ss);
// }