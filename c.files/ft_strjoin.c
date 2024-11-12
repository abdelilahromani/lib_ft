/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:26:17 by aromani           #+#    #+#             */
/*   Updated: 2024/11/12 22:45:53 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*str;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = (char *)malloc(s1len + s2len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, s1len);
	ft_memcpy(str + s1len, s2, s2len);
	str[s1len + s2len] = '\0';
	return (str);
}
