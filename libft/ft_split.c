/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:28:05 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/09/18 18:34:26 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#innclude "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t j
	int	cont;

	i = 0;
	cont = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
		cont++;
		}
	}
	while()
}

int main()
{
	char	*frase = "hola mundo";
	char	sep = ' ';
	
	return 0;
}
