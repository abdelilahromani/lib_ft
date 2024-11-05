/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:48:56 by aromani           #+#    #+#             */
/*   Updated: 2024/11/01 09:37:20 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *ph;
    char *pn;
    size_t i;
    size_t j;

    //(void)len;
    i = 0;
    j = 0;
    ph = (char *)haystack;
    pn = (char *)needle;
    if(!(pn[j]))
        return (ph);
    if (len == 0)
        return (NULL);
    while (ph[i] && --len)
    {
            while (ph[i + j] == pn[j] )
            {
                j++;
                if(pn[j] == '\0')
                {
                    return (ph + i);
                }
            }
        j = 0;
        i++;
    }
    return (NULL);

}

// int main()
// {
//     char str[50] = "hi thm usthering whatsapp";
//     char to_find[20] = "thm";

//     printf("%s \n",ft_strnstr(str,to_find,6));
//     printf("%s",strnstr(str,to_find,6));

// }