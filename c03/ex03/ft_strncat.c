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

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	unsigned int nb = 8;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);

	return (0);
}
