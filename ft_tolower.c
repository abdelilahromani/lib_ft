/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:19:20 by aromani           #+#    #+#             */
/*   Updated: 2024/11/01 09:37:27 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
// int main()
// {
// 	printf("%d",ft_tolower('A'));
// 	printf("%d",tolower('A'));
// }
