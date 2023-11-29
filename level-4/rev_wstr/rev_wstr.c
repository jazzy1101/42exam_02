#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	int	z = 0;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (i >= 0 && z >= 0)
		{
			j = i;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			z = i;
			while (z <= j)
			{
				write(1, &av[1][++z], 1);
				if (!av[1][z])
					write(1, " ", 1);
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return 0;
}	
