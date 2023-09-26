/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:28:05 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/09/26 17:36:19 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**ft_mallocsize(char const *s, char c)
{
	char	*aux;
	char	**aux2;
	int		cont;

	aux = (char *)s;
	cont = 0;
	while (*aux)
	{
		while (*aux == c)
			aux++;
		if (*aux != '\0')
			cont++;
		while (*aux != c && *aux)
			aux++;
	}
	aux2 = (char **)malloc((cont + 1) * sizeof(char *));
	if (aux == 0)
		return (0);
	aux2[cont] = 0;
	return (aux2);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**result;
	int		i;

	len = 0;
	i = 0;
	result = ft_mallocsize(s, c);
	if (result == 0)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			while (s[len] != c && s[len])
				len++;
			result[i++] = ft_substr(s, 0, len);
			s += len;
		}
		len = 0;
	}
	result[i] = 0;
	return (result);
}
