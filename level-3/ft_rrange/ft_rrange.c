#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	len = 0;
	int	*arr;
	int	i = 0;


	if (start > end)
		len = start - end + 1;
	else
		len = end - start + 1;
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return 0;
	if (start > end)
	{
		while (start >= end)
		{
			arr[i] = end;
			i++;
			end++;
		}
	}
	else
	{
		while (end >= start)
		{
			arr[i] = end;
			i++;
			end--;
		}
	}
	return arr;
}

#include <stdio.h>

int	main()
{
	int	*res = ft_rrange(3, 8);
	int	i = 0;

	while ()
	{
		printf("%d,", res[i]);
		i++;
	}
	return 0;
}
