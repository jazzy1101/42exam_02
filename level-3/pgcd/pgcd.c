#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	i = 1;
		int	a = atoi(argv[1]);
		int	b = atoi(argv[2]);
		int	biggest = 1;

		while (a >= i && b >= i)
		{
			if (a % i == 0 && b % i == 0)
			{	
				if (biggest < i)
					biggest = i;
			}
			i++;
		}
		printf("%d", biggest);
	}
	printf("\n");
	return 0;
}
