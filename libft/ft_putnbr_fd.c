/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:30:04 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/09/20 17:54:29 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		num;
	char	aux;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num / 10 != 0)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	aux = num % 10 + '0';
	write(fd, &aux, 1);
}
