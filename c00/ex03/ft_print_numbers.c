/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonturk <bonturk@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:36:33 by bonturk           #+#    #+#             */
/*   Updated: 2022/02/15 03:52:24 by bonturk          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numara;

	numara = '0';
	while (numara <= '9')
	{
		write(1, &numara, 1);
		numara++;
	}
}
