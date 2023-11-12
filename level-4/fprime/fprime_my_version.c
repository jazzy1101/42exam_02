#include <stdlib.h>
#include <stdio.h>

int	is_prime(unsigned int nbr)
{
	int	i= 2;

	if (nbr <= 1)
		return 0;
	while (nbr % i != 0)
		i++;
	if (nbr == 1)
		return 1;
	else
		return 0;
}

int	main (int ac, char **av)
{
	int	i = 1;
	int	param = 0;

	if (ac == 2)
	{
		param = atoi(av[1]);
		if (param > 0)
		{
			if (is_prime(param))
			{
				printf("%d", param);
				return 0;
			}
			while (param != i)
			{
				if (param % i == 0 && is_prime(i))
				{
					while (param % i == 0)
					{
						param /= i;
						printf("%d", i);
						if (param != i)
							printf("*");
					}
				}
				else
					i++;
			}
			printf("%d", param);
		}
	}
	printf("\n");
	return 0;
}
						
