#include <stdlib.h>

int	num_digit(int nbr)
{
	int	i = 0;

	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i + 1);
}


char	*ft_itoa(int nbr)
{
	char	*res;
	int	len = 0;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	len = num_digit(nbr);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return NULL;
	res[len] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return res;
}
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(-942809));
}
