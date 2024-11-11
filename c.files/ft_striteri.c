/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:59:27 by aromani           #+#    #+#             */
/*   Updated: 2024/11/11 17:36:11 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(f)(i, &s[i]);
		i++;
	}
}

// void test(unsigned int i,char *p)
// {
// 	*p -= 32;
// }

// int main()
// {
// 	char p[100] = "hiabdo";
// 	ft_striteri(p,&test);
// 	printf("%s",p);
// }