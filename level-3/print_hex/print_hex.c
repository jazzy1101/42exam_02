#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *s)
{
	int	res = 0;
	while (*s)
		res = res * 10 + *s - '0';
	return res;	
}

int	main(int argc, char **argv)
{
	int	decimal;
	char	hex = "0123456789abcdef";
	
	if (argc == 2)
	{
		decimal = ft_atoi(argv[1]);
		printf("%d\n", decimal);
		while (decimal > 0)
		{
			decimal /= 16;
			write(1, &hex[decimal % 16], 1);
		}	
	}
	write(1, "\n", 1);
	return (0);
}
