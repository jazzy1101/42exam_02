#include <unistd.h>
int	is_prime(int n)
{
	int	i = 2;
	
	if (n == 0 || n == 1)
		return 0;
	while (n % i != 0)
		i++;
	if (n == i)
		return 1;
	else
		return 0;
}

int	ft_atoi(char *s)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return res * sign;
}

void	ft_putnbr(int n)
{
	char	c;

	if(n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}
		
int	main(int argc, char **argv)
{
	int	i = 2;
	int	num = 0;
	int	res = 0;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num < 0)
		{
			write(1, "0", 1);
			return 0;
		}
		while (i <= num)
		{
			if (is_prime(i))
				res += i;
			i++;
		}
		ft_putnbr(res);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return 0;
}
