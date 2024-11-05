/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:01:57 by aromani           #+#    #+#             */
/*   Updated: 2024/11/05 15:23:10 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char    *ps1;
    unsigned char    *ps2;

    i = 0;
    ps1 = (unsigned char *)s1;
    ps2 = (unsigned char *)s2;
    // if (!s1 || !(s2))
    //     return(0);
    while(ps1[i] && ps2[i])
    {
        if(ps1[i] != ps2[i]  )
            return (ps1[i] - ps2[i]);
        i++;
    }
    return (ps1[i] - ps2[i]);
}

int main()
{
    char *s1 = "tes3";
    char *s2 = "tes4";

    printf("data : %d \n",ft_memcmp("test", "test", 7));
    //printf("data : %d",      memcmp("test", "test", 7));
}