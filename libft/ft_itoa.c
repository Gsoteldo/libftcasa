/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:55:54 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/09/19 17:25:00 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	ft_tamanyo(int number)
{
	size_t	length;
	
	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length += 1;
	while (number != 0)
	{

		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	unsigned int	cont;
	char	*str;

	cont = ft_tamanyo(n);
	str = malloc((cont + 1) * sizeof(char *));
	if (str == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
	str[cont] = '\0';
	while (num != 0)
	{
		str[cont - 1] = (num % 10) + '0';
		num /= 10;
		cont--;
	}
	return (str);
}
