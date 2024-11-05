/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:44:18 by aromani           #+#    #+#             */
/*   Updated: 2024/11/01 10:24:36 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;
    size_t s1len;

    s1len = ft_strlen(s);
    str = malloc(s1len + 1);
    if(start >= s1len || !(s))
        return (NULL);
    i = 0;
    while (s[start] && i < len)
    {
        str[i] = s[start];
        i++;
        start++; 
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    const char *s1 = "hi thre im using";
    char *res = ft_substr(s1,16,1);

    printf("%s",res);
}