/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:20:03 by aromani           #+#    #+#             */
/*   Updated: 2024/11/04 14:27:21 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int sig;
    int num;

    i = 0;
    sig = 1;
    num = 0;
    while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sig *= -1;
            i++;
        }
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + str[i] - 48;
        i++;
    }
    return (num * sig);
}

// int main()
// {
//     char str[50] = "    -864+-+848";
    
//     printf("%d \n",atoi(str));
//     printf("%d",ft_atoi(str));
// }