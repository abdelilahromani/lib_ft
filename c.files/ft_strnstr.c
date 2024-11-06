/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:48:56 by aromani           #+#    #+#             */
/*   Updated: 2024/11/06 21:46:40 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ph;
	char	*pn;
	size_t	i;
	size_t	j;

	ph = (char *)haystack;
	pn = (char *)needle;
	if (!(pn[0]))
		return (ph);
	i = 0;
	while (ph[i] && i < len)
	{
		j = 0;
		while (ph[i + j] == pn[j] && i + j < len)
		{
			j++;
			if (pn[j] == '\0')
			{
				return (ph + i);
			}
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char str[50] = "hi thm usthering whatsapp";
//     char to_find[20] = "thm";

//     printf("%s \n",ft_strnstr(str,to_find,6));
//     printf("%s",strnstr(str,to_find,6));

// }