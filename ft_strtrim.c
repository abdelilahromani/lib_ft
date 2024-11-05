/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:29:43 by aromani           #+#    #+#             */
/*   Updated: 2024/11/02 10:43:13 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t fcheck(char const c,char const *set)
{
    size_t  i;

    i = 0;
    while(set[i])
    {
        if(set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    char *str;
    
    if(s1 == NULL)
        return(NULL);
    start = 0;
    end = ft_strlen(s1);
    while(s1[start] && fcheck(s1[start],set) == 1)
        start++;
    while(end > 0 && fcheck(s1[end - 1],set) == 1)
        end--;
    str = malloc(end - start + 1);
    ft_memcpy(str,s1 + start,end - start);
    str[end - start + 1] = '\0'; 
    return (str);
}

int main()
{
    char *str = "agaaaaaaaaga";

    printf("%s",ft_strtrim(str,"aabba"));
}