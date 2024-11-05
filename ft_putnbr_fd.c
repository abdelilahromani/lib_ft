/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:44:16 by aromani           #+#    #+#             */
/*   Updated: 2024/11/05 21:47:50 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
    {
        ft_putchar_fd('-',fd);
        ft_putchar_fd('2',fd);
        ft_putnbr_fd(147483648,fd);
    }
    else if(n < 0)
    {
        n *= -1;
        ft_putchar_fd('-',fd);
        ft_putnbr_fd(n,fd);
    }
    else if(n > 9)
    {
        ft_putnbr_fd(n /10,fd);
        ft_putnbr_fd(n %10,fd);
    }
    else
        ft_putchar_fd(n + 48,fd);
}