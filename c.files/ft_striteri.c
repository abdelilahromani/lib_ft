/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:59:27 by aromani           #+#    #+#             */
/*   Updated: 2024/11/06 21:40:44 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(f)(i, &s[i]);
		i++;
	}
}

// void test(unsigned int i,char *p)
// {
// 	*p = 'a';
// }

// int main()
// {
// 	char p[10] = "hi abdo";
// 	void (*pa)(unsigned int ,char *);
// 	pa = &test;
// 	ft_striteri(p,pa);
// 	printf("%s",p);
// }