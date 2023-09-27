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

static void	ft_free(char *result)
{
	int i;

	i = 0;
	while (result[i] != '\0')
	{
		free(result);
		i++;
	}
	free(result);
}

static int	ft_countwords(char const *s, char c)
{
	int i;
	int		cont;

	i = 0;
	cont = 0;
	while (s[i] != '\0')
	{
		if(s[i] != c)
		{
			cont++;
			while (s[i] != c && s[i])
				i++;
			if(s[i] == '\0')
				return (cont);
		}
		i++;
	}
	return (cont);
}

static void ft_strcpy(char *word, char const *str, char c, int j)
{
	int i;

	i = 0;
	while(str[j] == c && str[j] != '\0')
		j++;
	while (str[i + j] != c && str[i + j] != '\0')
	{
		word[i] = str[i + j];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_mallocsize(char const *s, char c, int *i)
{
	int		j;
	char	*word;

	j = *i;
	word = NULL;
	while (s[*i] != '\0')
	{
		if (s[*i] != c)
		{
			while (s[*i] != '\0' && s[*i] != c)
				*i = *i + 1;
			word = (char *)malloc(sizeof(char) * (*i + 1));
			if (word == 0)
				return (0);
			break ;
		}
		*i = *i +1;
	}
	ft_strcpy(word, s, c, j);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int 	j;
	int		pos;

	if(s == 0 || c == 0)
		return (0);
	pos = 0;
	i = 0;
	j = ft_countwords((char *)s, c);
	result = (char **)malloc(sizeof(char *) * (j + 1));
	if (result == 0)
		return (0);
	result[j] = 0;
	while (i < j)
	{
		result[i] = ft_mallocsize(s, c, &pos);
		if (result[i] == 0)
		{
			ft_free(result[i]);
		}
		i++;
	}
	return (result);
}
