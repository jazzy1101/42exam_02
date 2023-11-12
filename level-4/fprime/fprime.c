#include <stdlib.h>
#include <stdio.h>

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		int	num = atoi(av[1]);
		int	i = 2;
		
		if (num <= 0)
		{
			printf("\n");
			return 0;
		}
		if (num == 1)
			printf("1");
		while (num >= i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				num /= i;
				i = 2;
				if (num != 1)
					printf("*");
			}
			i++;
		}
	}
	printf("\n");
	return 0;
}
