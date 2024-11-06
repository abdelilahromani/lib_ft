/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:10:44 by aromani           #+#    #+#             */
/*   Updated: 2024/11/06 21:43:00 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
	char *p = "";
	printf("%zu",ft_strlen(p));
	printf("%zu",strlen(p));
}*/
