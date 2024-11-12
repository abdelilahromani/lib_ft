/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:21:21 by aromani           #+#    #+#             */
/*   Updated: 2024/11/12 22:45:14 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if ((!(dst) && !(src)) || len == 0)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
