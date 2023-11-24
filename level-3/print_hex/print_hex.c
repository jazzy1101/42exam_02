#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *s)
{
	int	res = 0;
	while (*s)
	{
		res = res * 10 + *s - '0';
		s++;
	}
	return res;	
}
void	print_hex(int decimal)
{
	char    hex[] = "0123456789abcdef";

	if (decimal >= 16)
		print_hex(decimal / 16);
	write(1, &hex[decimal % 16], 1);
}
int	main(int argc, char **argv)
{
	int	decimal;

	if (argc == 2)
	{
		decimal = ft_atoi(argv[1]);
		print_hex(decimal);
	}
	write(1, "\n", 1);
	return (0);
}
