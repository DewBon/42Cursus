/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonturk <bonturk@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 03:48:21 by bonturk           #+#    #+#             */
/*   Updated: 2022/03/02 03:48:25 by bonturk          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

int	main(int ac, char **av)
{
	int		cnt;
	int		i;
	char	*bucket;

	cnt = 1;
	while (cnt <= ac)
	{
		i = 2;
		while (i <= ac - 1)
		{
			if (ft_strcmp(av[i], av[i - 1]) < 0)
			{
				bucket = av[i];
				av[i] = av[i - 1];
				av[i - 1] = bucket;
			}
			i++;
		}
		cnt++;
	}
	cnt = 0;
	while (++cnt < ac)
	{
		ft_putstr(av[cnt]);
	}
}
