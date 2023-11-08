#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			int	j = 0;
			while ((argv[1][i + j] == ' ' || argv[1][i + j] == '\t') && argv[1][i + j])
				j++;
			if (argv[1][i + j])
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
