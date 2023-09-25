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

static int	isnegative(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	int		num;
	size_t	cont;
	char	*str;

	cont = 0;
	str = NULL;
	n = isnegative(n);
	num = n;
	while (num != 0)
	{
			num /= 10;
			cont++;
	}
	str = malloc((cont + 1) * sizeof(char *));
	while (cont != 0)
	{
		str[cont - 1] = n % 10 + '0';
		n = n / 10;
		cont--;
	}
	return (str);
}
