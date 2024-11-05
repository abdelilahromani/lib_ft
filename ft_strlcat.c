/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:47:33 by aromani           #+#    #+#             */
/*   Updated: 2024/11/04 15:36:03 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t  dlen;
    size_t  slen;
    size_t  i;
    size_t  dl;
    //size_t res;

    dlen = ft_strlen(dst);
    slen = ft_strlen(src);

    if(dstsize > slen)
        return (dstsize + slen);
    i = 0;
    dl = dlen;
    while(src[i] && i < dstsize - 1)
    {
        dst[dl] = src[i];
        i++;
        dl++;
    }
    dst[dl] = '\0';
    return(slen + dlen);
}

// #include <string.h>
// int main()
// {   
//     char dst[30] = "Hello";
//     char src[4] = "Word";

//     size_t i = ft_strlcat(dst,src,7);
//     printf("string :   %s   ||  the len  :   %zu \n",dst,i);

//     char dst1[30] = "Hello";
//     char src1[4] = "Word";

//     size_t j = strlcat(dst1,src1,7);
//     printf("string :   %s   ||  the len  :   %zu",dst1,j);

// }