#include <unistd.h>
void	ft_putnbr(int n)
{
	char	res;

	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		res = n + 48;
		write(1, &res, 1);	
	}
}
int	ft_atoi(char *s)
{
	int	i = 0;
	int	res = 0;

	while (s[i])
	{
		res = res * 10 + (s[i] - 48);
		i++;
	}
	return (res);
}
int	main(int argc, char **argv)
{
	int	i = 1;
	char	num = '1';

	if (argc == 2)
	{
		while (i <= 9)
		{
			write(1, &num, 1);
			write(1, " x ", 3);
			ft_putnbr(ft_atoi(argv[1]));
			write(1, " = ", 3);
			ft_putnbr(i * ft_atoi(argv[1]));
			write(1, "\n" , 1);
			i++;
			num++;
		} 
	}
	else
		write(1, "\n", 1);
	return 0;
}
