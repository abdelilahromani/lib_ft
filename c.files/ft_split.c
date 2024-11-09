/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromani <aromani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:48:32 by aromani           #+#    #+#             */
/*   Updated: 2024/11/09 21:32:54 by aromani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	copystr(char *dest, const char *src, size_t index, char c)
{
	size_t	i;

	i = 0;
	while (src[index] && src[index] != c)
	{
		dest[i] = src[index];
		i++;
		index++;
	}
	dest[i] = '\0';
	return (index);
}

static void	ft_free(char **p, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(p[i]);
		i++;
	}
	free(p);
}

static char	**filler(char **ptr, const char *s, char c, size_t count)
{
	size_t	i;
	size_t	index;
	size_t	j;

	i = 0;
	index = 0;
	while (i < count)
	{
		while (s[index] && s[index] == c)
			index++;
		j = 0;
		while (s[index + j] && s[index + j] != c)
			j++;
		ptr[i] = (char *)malloc(j + 1);
		if (!ptr[i])
		{
			ft_free(ptr, i);
			return (NULL);
		}
		index = copystr(ptr[i], s, index, c);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	count;

	if (s == NULL)
		return (NULL);
	count = count_word(s, c);
	ptr = (char **)malloc((count + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr = filler(ptr, s, c, count);
	return (ptr);
}

// int main()
// {
//     char **p = ft_split("gegyfuy2fgu2gyf\0fiugfiguf
//\0foh2fohofih\0fo2hfiou2hfg\0",'\0');
//     int i = 0;
//     while (p[i])
//         printf("%s \n",p[i++]);
// }