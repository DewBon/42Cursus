/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bonturk <bonturk@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:40:38 by bonturk           #+#    #+#             */
/*   Updated: 2022/02/27 17:40:41 by bonturk          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	unsigned int	sr;
	unsigned int	de;

	de = 0;
	while (dest[de] != '\0')
		de++;
	sr = 0;
	while (sr < nb && src[sr] != '\0')
	{
		dest[de + sr] = src[sr];
		sr++;
	}
	dest[de + sr] = '\0';
	return (dest);
}
