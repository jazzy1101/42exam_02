#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i = 1;
	int	max = 0;
	if (ac == 3)
	{
		int	a = atoi(av[1]);
		int	b = atoi(av[2]);
		while (i <= a && i <= b)
		{
			if (a % i == 0 && b % i == 0)
			{
				if (max < i)
					max = i;
			}
			i++;
		}
		printf("%d", max);	
	}
	printf("\n");
	return 0;
}
