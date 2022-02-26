/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonturk <bonturk@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:18:28 by bonturk           #+#    #+#             */
/*   Updated: 2022/02/15 03:33:36 by bonturk          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ters_alfb;

	ters_alfb = 'z';
	while (ters_alfb >= 'a' )
	{
		write(1, &ters_alfb, 1);
		ters_alfb--;
	}
}
