/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonturk <bonturk@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:40:10 by bonturk           #+#    #+#             */
/*   Updated: 2022/02/19 16:54:14 by bonturk          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int        main (void)
{
    int tab[] = {10, 7, 8, 9, 1, 5};
    int size;
    
    size = 6;

    printf("Original: ");
    putarr(tab, size);

    ft_sort_int_tab(tab, size);

    printf("Modified: ");
    putarr(tab, size);
}
