int	ft_atoi(const char *str)
{
	int	sign = 1;
	int	i = 0;
	int	res = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 127)
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}
		
