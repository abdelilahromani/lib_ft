/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:20:56 by aromani           #+#    #+#             */
/*   Updated: 2024/11/06 21:31:07 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

// void ft_putchar(char c)
// {
// 	write(1,&c,1);
// }

// int main()
// {
// 	//int a ;
// 	int b;
// 	//int i = 0;
// 	//int j = 1;
// 	ft_memset(&b,0,4);
// 	ft_memset(&b,5,2);
// 	ft_memset(&b,57,1);
// 	printf("%d",b);
// 	// 00000000 00000000 00000101 00111001
//     //11111111 11111111 11111010 11000110 
// }  