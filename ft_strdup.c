#include "libft.h"

char *ft_strdup(const char *s1)
{
    char    *ptr;
    size_t  ln;

    if (!s1)
        return (NULL);
    ln = ft_strlen(s1);
    ptr = (char *)malloc(ln + 1);
    if(!ptr)
        return (NULL);
    if (s1)
        ft_memcpy(ptr,s1,ln);

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