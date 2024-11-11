/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:57:28 by aromani           #+#    #+#             */
/*   Updated: 2024/11/11 15:52:01 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
// #include <string.h>
// int main()
// {
// 	long a = SIZE_MAX;
// 	char s1[50] = "hi there";
// 	char s2[50] = "hi there";

// 	ft_bzero(s1,(size_t)0);
// 	bzero(s2,(size_t)0);
// 	printf("%s \n",s1);
// 	printf("%s \n",s2);

// 	printf("%zu \n",a);

// 	printf("size_of_long %lu \n",sizeof(long));
// 	printf("size_of_sizet %lu \n",sizeof(size_t));
// 	printf("size_of_ulong %lu \n",sizeof(unsigned long));

// }
