/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:13:42 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/09/15 17:38:42 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t j;
	char	*ptr;

	ptr = (char*)malloc(sizeof((char)*str) * (len + 1));
	if (ptr == 0)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (i >= start && j < len)
		{
			ptr[j] = str[i];
			j++;
		}
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}
