/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:02:34 by aromani           #+#    #+#             */
/*   Updated: 2024/11/11 15:59:06 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (p[i])
	{
		if (p[i] == (char)c)
			return (&p[i]);
		else
			i++;
	}
	if ((char)c == '\0')
		return ((char *)p + i);
	return (NULL);
}

// int main()
// {
//     char s[20] = "0000bb";
//     printf("%s \n",ft_strchr(s,'a'));
//     printf("%s",strrchr(s,'a'));
// }