#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (lst == 0 || del == 0)
        return ;
    while (*lst)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
}