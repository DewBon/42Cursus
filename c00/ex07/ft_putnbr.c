/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonturk <bonturk@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:50:09 by bonturk           #+#    #+#             */
/*   Updated: 2022/02/15 13:50:13 by bonturk          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int xy)
{
	if (xy == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		xy = 147483648;
	}
	if (xy < 0)
	{
		ft_putchar('-');
		xy *= -1;
	}
	if (xy < 10)
	{
		ft_putchar(xy + 48);
		return ;
	}
	else
		ft_putnbr(xy / 10);
	ft_putnbr(xy % 10);
}
