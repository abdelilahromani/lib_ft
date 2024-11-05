/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:19:33 by aromani           #+#    #+#             */
/*   Updated: 2024/11/01 09:37:33 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<ctype.h>

int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// int main()
// {
// 	int i = 97;
// 	printf("%d \n",toupper(i));
// 	printf("%d",ft_toupper(i));
// }
