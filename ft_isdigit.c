/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:19:06 by aromani           #+#    #+#             */
/*   Updated: 2024/11/01 09:36:33 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
// int main()
// {
// 	printf("%d \n",ft_isdigit('0'));
// 	printf("%d",isdigit('0'));
// }
