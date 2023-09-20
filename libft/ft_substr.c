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
	char	*ptr;
	size_t	i;

	ptr = malloc((len + 1) * sizeof(char));
	i = start;
	while (i < start + len)
	{
		ptr[i - start] = str[i];
		i++;
	}
	ptr[i - start] = '\0';
	return (ptr);
}
