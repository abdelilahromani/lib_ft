/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:39:01 by aromani           #+#    #+#             */
/*   Updated: 2024/11/06 22:05:11 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	ln;

	ln = ft_strlen(s1);
	ptr = (char *)malloc(ln + 1);
	if (!ptr)
		return (NULL);
	if (s1)
		ft_memcpy (ptr, s1, ln);
	ptr[ln] = '\0';
	return (ptr);
}

// #include <string.h>
// int main()
// {
//     char *res = ft_strdup("abdo");
//     char *str = ft_strdup("hello");

//     res = str;
//     printf("%s", res);
// }