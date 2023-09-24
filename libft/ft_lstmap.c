#include "libft.h"
#include <stdio.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *primero;
    t_list *nuevo;

    if (lst == 0 || f == 0 || del == 0)
        return (0);
    nuevo = 0;
    while (lst)
    {
        if (!(nuevo = ft_lstnew(f(lst->content))))
        {
            while (primero != 0)
            {
                nuevo = primero->next;
                del(primero->content);
                free(primero);
                primero = nuevo;
            }
            lst = 0;
            return (0);
        }
        ft_lstadd_back(&primero, nuevo);
        lst = lst->next;
    }
    return (primero);
}