/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:47:33 by aromani           #+#    #+#             */
/*   Updated: 2024/11/06 21:41:39 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	allen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (!dst || !src || dstsize == 0)
		return (slen);
	if (dstsize <= dlen)
		return (dstsize + slen);
	allen = dstsize - dlen - 1;
	if (slen <= allen)
		ft_memcpy (dst + dlen, src, slen + 1);
	else
	{
		ft_memcpy (dst + dlen, src, allen);
		dst[dlen + allen] = '\0';
	}
	return (slen + dlen);
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