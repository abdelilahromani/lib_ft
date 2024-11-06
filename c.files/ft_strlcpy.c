/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:47:49 by aromani           #+#    #+#             */
/*   Updated: 2024/11/06 21:42:36 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlen(const char *str)
// {
// 	size_t i;
// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcl;

	srcl = ft_strlen(src);
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcl);
}

// int main()
// {   
//     char dst[30] = "Helloo0000000";
//     char src[4] = "Word";

//     size_t i = strlcpy(dst,src,4);
//     printf("string :   %s   ||  the len  :   %zu  \n",dst,i);
// 	char dst1[30] = "Helloo0000000";
//     char src1[4] = "Word";
// 	size_t i1 = ft_strlcpy(dst1,src1,4);
//     printf("string :   %s   ||  the len  :   %zu  \n",dst1,i1);
//}
