/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:31:40 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/09/13 17:43:43 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	cont;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			cont = i;
		}
		i++;
	}
	if (str[i] == '\0')
	{
		return ((char *)str + i);
	}
	return ((char *)str + cont);
}
