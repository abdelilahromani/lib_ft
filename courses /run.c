# include <stdio.h>
# include <string.h>
# include "libft.h"

void ft_swap(t_list *node)
{
    void *tmp;
    void *swapadd;
    int size;
    //t_list *ss = node;

    size = 0;
    while (node != NULL)
    {
        if(size == 1)
        {
            tmp = node->content;
            node->content = ft_lstlast(node);
            printf("%s \n",node->content);
            printf("%s",tmp);
            node->next = NULL;
        }
        node = node->next;
        size++;
    }
    //node->content = &tmp;
}

void ft_swapadd(t_list *node)
{

    while(node != NULL)
    {
        node = node->next;
    }
}
void test(t_list *ls)
{
    t_list *tmp;

    tmp = ls;
    while(tmp)
    {
        free(tmp->content);
        tmp = tmp->next;
    }
}
void    f(){system("leaks a.out");}
int main()
{
    t_list *node;
    t_list tmp;
    int size;

    atexit(f);
    node = NULL;
    ft_lstadd_front(&node,ft_lstnew(ft_strdup("number3")));
    ft_lstadd_front(&node,ft_lstnew(ft_strdup("number2")));
    ft_lstadd_front(&node,ft_lstnew(ft_strdup("number1")));
    //ft_lstadd_front(&node,ft_lstnew(ft_strdup("")));

    // ft_swap(node);
    // size = 0;
    // while (node)
    // {
    //     node = node->next;
    // }


    // while (node != NULL)
    // {
    //     printf("%s \n",node->content);
    //     node = node->next;
    // }

    // while (node != NULL)
    // {
    //     printf("%s \n",node->content);
    //     node = node->next;
    // }

    test(node);
    t_list *temp;
    while (node->next)
    {
        temp = node->next;
        free(node);
        node = temp;
    }
    free(node);
    // free(node);
}