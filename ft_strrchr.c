/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:25:22 by aromani           #+#    #+#             */
/*   Updated: 2024/11/04 18:29:50 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char * str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char *p;

    i = 0;
    if(!s)
        return (NULL);
    p = (char *)s;
    while(s[i])
        i++;
    while (i >= 0)
    {
        if(p[i] == (char)c)
            return(&p[i]);
        i--;
    }
    return (NULL);
}

// int main()
// {
//     char s[50] = "mbdooohssine";

//     printf("%s  \n",ft_strrchr(s,'m'));
//     printf("%s",strrchr(s,'m'));
    
// }