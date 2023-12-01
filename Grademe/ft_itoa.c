#include <stdlib.h>
int	num_digit(int n)
{
	int	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return i;
}
char	*ft_itoa(int nbr)
{
	int	tmp = nbr;
	int	digit = 0;
	char	*arr;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr == 0)
		return ("0\0");
	if (tmp < 0)
	{
		tmp *= -1;
		digit = num_digit(tmp) + 1;
	}
	else
		digit = num_digit(tmp);
	arr = malloc(sizeof(char) * (digit + 1));
	if (!arr)
		return NULL;
	arr[digit] = '\0';
	while (tmp > 0 && --digit >= 0)
	{
		arr[digit] = tmp % 10 + '0';
		tmp /= 10;
	}
	if (nbr < 0)
		arr[0] = '-';
	return arr;
}
#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(123456));
	printf("%s\n", ft_itoa(-123456));
	printf("%s\n", ft_itoa(0));
	return 0;
}		
