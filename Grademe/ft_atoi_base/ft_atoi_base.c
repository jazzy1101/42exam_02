char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;
	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}

	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * sign);
		++str;
	}
	return (result);
}	

/*int	ft_atoi_base(const char *str, int str_base)
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
}*/
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_atoi_base("12FDB3", 16));	
	return 0;
}*/
