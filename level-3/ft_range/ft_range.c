#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	len = 0;
	int	*res;
	int	i = 0;

	if (start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	res = (int *)malloc(sizeof(int) * len);
	if (res)
	{
		if (start > end)
		{
			while (start >= end)
			{
				res[i] = start;
				start--;
				i++;
			}
		}
		else
		{
			while (start <= end)
			{
				res[i] = start;
				start++;
				i++;
			}
		}
	}
	else
		return 0;
	return res;		
}
#include <stdio.h>

int	main()
{
	int	i = 0;
	int	*arr = ft_range(1, 3);
	while (arr[i])
	{
		printf("%d,", arr[i]);
		i++;
	}
	return 0;
}
