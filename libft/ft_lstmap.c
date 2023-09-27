/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:33:01 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/09/27 21:09:10 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;

	ret = 0;
	if (f == 0 || del == 0)
		return (0);
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst->next;
	}
	return (ret);
}

	/*if (f == 0 || del == 0 || lst == 0)
		return (0);
	primero = 0;
	while (lst)
	{
		nuevo = ft_lstnew(f(lst->content));
		if (!nuevo)
		{
			while (primero)
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
	}*/
