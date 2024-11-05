/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:26:17 by aromani           #+#    #+#             */
/*   Updated: 2024/11/04 15:37:02 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    //size_t  j;
    size_t  s1len;
    size_t  s2len;
    char *str;     
    if(!s1 || !s2)
        return (NULL);
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    i = 0;
    str = malloc(s1len + s2len + 1);
    if (s1 && s2)
    {
        ft_memcpy(str,s1,s1len);
        ft_memcpy(str + s1len ,s2,s2len);
        str[s1len + s2len] = '\0'; 
    }
    return (str);
}

int main()
{
    const char *s1;
    const char *s2 = "nuujk";

    printf("%s",ft_strjoin(s1,s2));
}
