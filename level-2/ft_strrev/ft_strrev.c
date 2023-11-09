char	*ft_strrev(char *str)
{
	int	start = 0;
	int	end = 0;
	char	tmp;

	while (str[end])
		end++;
	end--;
	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
	return str;
}
#include <stdio.h>

int	main()
{
	char	str[] = "My legs are sleeping.";
	char	*res = ft_strrev(str);
	printf("%s\n", res);
	return 0;
}
