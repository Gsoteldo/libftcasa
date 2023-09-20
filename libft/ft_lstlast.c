/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:42:54 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/09/20 20:44:30 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (0);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}
/*
int main()
{
    t_list *lst;
    t_list *last;
    t_list *new;

    lst = ft_lstnew("first");
    new = ft_lstnew("second");
//    ft_lstadd_front(&lst, new);
    new = ft_lstnew("third");
//    ft_lstadd_front(&lst, new);
    new = ft_lstnew("fourth");
  //  ft_lstadd_front(&lst, new);
    new = ft_lstnew("fifth");
    //ft_lstadd_front(&lst, new);
    last = ft_lstlast(lst);
    printf("%s\n", last->content);
    return (0);
}
*/
