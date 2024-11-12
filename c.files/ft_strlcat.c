/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:47:33 by aromani           #+#    #+#             */
/*   Updated: 2024/11/12 22:45:58 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	allen;

	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	dlen = ft_strlen(dst);
	if (!dst || !src)
		return (slen);
	if (dstsize <= dlen)
		return (dstsize + slen);
	allen = dstsize - dlen - 1;
	if (slen <= allen)
		ft_memcpy (dst + dlen, src, slen + 1);
	else
	{
		ft_memcpy (dst + dlen, src, allen);
		dst[dlen + allen] = '\0';
	}
	return (slen + dlen);
}
