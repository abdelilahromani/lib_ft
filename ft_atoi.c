/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:20:03 by aromani           #+#    #+#             */
/*   Updated: 2024/11/05 22:07:56 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int checker(unsigned long n)
{
    if (n >= 9223372036854775807)
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int i;
    int sig;
    unsigned long num;

    i = 0;
    sig = 1;
    num = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sig *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + str[i] - 48;
        i++;
        if (checker(num) != 0)
            return(1);
    }
    return ((int)(num * sig));
}

// int main()
// {
//     char str[50] = "    -864+-+848";
    
//     printf("%d \n",atoi(str));
//     printf("%d",ft_atoi(str));
// }