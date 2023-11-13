int	ft_atoi_base(const char *str, int str_base)
{
	char	base_low[] = "0123456789abcdef";
	int	res = 0;
	int	sign = 1;
	
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		
	
	

	
