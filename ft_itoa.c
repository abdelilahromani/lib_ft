/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:18:04 by aromani           #+#    #+#             */
/*   Updated: 2024/11/05 11:00:49 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int signcheck(int n)
{
    if(n < 0)
        return(1);
    else
        return(0);
}

int counter(long n)
{
    int count;
    int i;

    count = 0;
    i = 0;
    if(n < 0)
        n *= -1;
    if(n > 9)
    {
        while(n > 9)
        {
            n /= 10;
            count++;  
        }
    }
    if(n <= 9)
        count++;
    return(count);
}
void    maincode(char *ptr,int  len,long n,int sig)
{
    if(n < 0)
        n *= -1;
    while(len >= 0)
    {
        ptr[len] = (n % 10) + 48;
        n /= 10;
        len--;
    }
    if(sig == 1)
        ptr[0] = '-';
}
char *ft_itoa(int nbr)
{
    int     sig;
    int     count;
    int     len;
    long    n;
    char    *ptr;
    
    n = (long)nbr;
    sig = signcheck(n);
    count = counter(n);
    len = count + sig;
    ptr = (char *)malloc(len + 1);
    if(!ptr)
        return (NULL);
    len--;
    maincode(ptr,len,n,sig);
    ptr[count + sig] = '\0';
    return(ptr); 
}

// int main()
// {
//     printf("%s",ft_itoa(2147483647));
// }