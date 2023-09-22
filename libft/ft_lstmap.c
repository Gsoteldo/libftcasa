#include "libft.h"
#include <stdio.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *temp;

    if (lst == 0 || f == 0 || del == 0)
        return (0);
    new = 0;
    while (lst)
    {
        temp = ft_lstnew(f(lst->content));
        if (!temp)
        {
            ft_lstclear(&new, del);
            return (0);
        }
        ft_lstadd_back(&new, temp);
        lst = lst->next;
    }
    return (new);
}

int main()
{
    t_list *lst;
    t_list *new;

    lst = ft_lstnew("first");
    lst->next = ft_lstnew("second");
    lst->next->next = ft_lstnew("third");
    lst->next->next->next = ft_lstnew("fourth");
    lst->next->next->next->next = ft_lstnew("fifth");
    new = ft_lstmap(lst, ft_lstadd_back, ft_lstdelone);
    while (new)
    {
        printf("%s\n", (char *)new->content);
        new = new->next;
    }
    return (0);
}