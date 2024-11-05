/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:15:39 by aromani           #+#    #+#             */
/*   Updated: 2024/11/04 18:49:28 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	unsigned char *d;
	unsigned char *s;
	
	if (!dst && !src)
		return (NULL);

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)d);
}
// #include <string.h>

// int main()
// {
// 	char *dst =NULL;
// 	char *dst0 = NULL;
// 	char src[20] = " im soo happy";
// 	char src0[20] = " im soo happy";
	
// 	memcpy(dst,src,13);
// 	//ft_memcpy(dst0,src0,13);
// 	printf("dst    |||||%s",dst);	
// 	//printf("     dst    %s",dst0);

	
// }
