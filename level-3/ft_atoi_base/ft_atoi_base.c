int	ft_atoi_base(const char *str, int str_base)
{
	char	u[] = "0123456789ABCDEF";
	char	l[] = "0123456789abcdef";
	int	i = 0;
	int	res = 0;
	int	sign = 1;

	while (str[i])
	{	
		if (str[0] == '-')
                	sign = -1;
		while (str[i] == '-' || str[i] == '+')
			i++;
		if (str_base <= 10)
		{		
			while (str[i] >= '0' && str[i] <= '9') 
			{
				res = res * str_base + (str[i] - '0');
				i++;
			}
		}
		else
		{
			if (str[i] >= '0' && str[i] <= '9')
                                res = res * str_base + (str[i] - '0');
			else if (str[i] >= 'A' && str[i] <= u[str_base - 1])
				res = res * str_base + (10 + str[i] - 'A');
			else if (str[i] >= 'a' && str[i] <= l[str_base - 1])
                                res = res * str_base + (10 + str[i] - 'a');
			else
				break;
			i++;
		}
	}
	return (res * sign);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_atoi_base("12FDB3", 16));	
	return 0;
}
