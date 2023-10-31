#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i])
		{
			int	x = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				x = argv[1][i] - 96;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				x = argv[1][i] - 64;
			else
				write(1, &argv[1][i], 1);
			while (x)
			{
				write(1, &argv[1][i], 1);
				x--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}			
