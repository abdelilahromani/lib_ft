/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:00:32 by aromani           #+#    #+#             */
/*   Updated: 2024/11/06 21:45:18 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	i = 0;
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((st1[i] || st2[i]) && i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char word[10];
//     char word1[30];
//     printf("%d\n", ft_strncmp(word, word1, 5));
//     printf("%d\n", strncmp(word, word1, 5));
// }