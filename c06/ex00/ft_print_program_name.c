/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonturk <bonturk@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:00:13 by bonturk           #+#    #+#             */
/*   Updated: 2022/03/01 17:00:19 by bonturk          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 1)
		return (0);
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i ++;
	}
	write(1, "\n", 1);
	return (1);
}
