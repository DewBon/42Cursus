/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonturk <bonturk@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:17:10 by bonturk           #+#    #+#             */
/*   Updated: 2022/02/19 16:47:42 by bonturk          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	gecici;

	i = 0;
	while (i < size / 2)
	{
		gecici = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = gecici;
		i++;
	}
}
