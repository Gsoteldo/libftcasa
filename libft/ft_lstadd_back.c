#include "libft.h"
#include <stdio.h>

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last;

    if (lst == 0 || new == 0)
        return ;
    last = ft_lstlast(*lst);
    if (!last)
        *lst = new;
    else
        last->next = new;
}
/*
int main()
{
    t_list *lst;
    t_list *new;

    lst = ft_lstnew("first");
    lst->next = ft_lstnew("second");
    lst->next->next = ft_lstnew("third");
    lst->next->next->next = ft_lstnew("fourth");
    lst->next->next->next->next = ft_lstnew("fifth");
    new = ft_lstnew("primera");
    ft_lstadd_back(&lst, new);
    while (lst)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
    return (0);
}*/