/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:33:01 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/09/26 17:35:41 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*primero;
	t_list	*nuevo;

	if (f == 0 || del == 0 || lst == 0)
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
	}
	return (primero);
}
