/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:21:21 by aromani           #+#    #+#             */
/*   Updated: 2024/11/05 22:24:35 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	* ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	unsigned char		*d;
	const unsigned char	*s;
	
	if(!(dst) || !(src) || len == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while(len--)
		{
			d[len] = s[len];
		}
	}else
	{
		while(i < len)
		{
			d[i] = s[i];
			i++;
		}	
	}
	return (d);
}

// #include <stdlib.h>
// int main()
// {
// 	char str[20] = "abcdassss\0";
// 	char st[20] = "abcdassss\0";
 
// 	ft_memmove(str + 6, str, 10);
// 	memmove(st + 6, st, 10);
// 	/*int i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// 	write(1,"\n",1);*/
// 	printf("str :%s\n", str);
// 	printf("st :%s", st);
// 	/*int j = 0;
// 	while(st[j])
// 	{
// 		write(1,&st[j],1);
// 		j++;
// 	}*/
// }
