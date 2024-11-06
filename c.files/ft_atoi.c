/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:20:03 by aromani           #+#    #+#             */
/*   Updated: 2024/11/06 21:10:45 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(unsigned long n, int sig)
{
	if (n >= 9223372036854775807 && sig == 1)
		return (-1);
	if (n >= 9223372036854775807 && sig == -1)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sig;
	unsigned long	num;

	i = 0;
	sig = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + str[i] - 48;
		i++;
		if (checker(num, sig) != 0)
			return (checker(num, sig));
	}
	return ((int)(num * sig));
}

// int main()
// {
//     //char str[50] = "9223372036854775807";
//     printf("%d \n",atoi("-9223372036854775807"));
//     printf("%d",ft_atoi("-9223372036854775807"));
// }