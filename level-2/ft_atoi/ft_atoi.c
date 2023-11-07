int	ft_atoi(const char *str)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;

	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
#include <stdlib.h>
#include <stdio.h>
int	main()
{
	printf("%d vs %d\n", ft_atoi("1234"), atoi("1234"));
	printf("%d vs %d\n", ft_atoi("      ---1234"), atoi("     ---1234"));
	printf("%d vs %d\n", ft_atoi("	+1234"), atoi("	  +1234"));
	printf("%d vs %d\n", ft_atoi("234564234256562"), atoi("234564234256562"));
	return 0;
}
