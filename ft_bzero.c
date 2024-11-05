/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:57:28 by aromani           #+#    #+#             */
/*   Updated: 2024/11/05 11:16:22 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

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

void ft_putchar(char c)
{
	write(1,&c,1);
}	

int main()
{
	char s1[50] = "hi there";
	char s2[50] = "hi there";

	ft_bzero(s1,3);
	bzero(s2,3);
	int	i = 0;
	int j = 0;
	while (i < 8)
	{
		ft_putchar(s1[i]);
		i++;
	}
	ft_putchar(' ');
	while (j < 8)
	{
		ft_putchar(s2[j]);
		j++;
	}	
}
