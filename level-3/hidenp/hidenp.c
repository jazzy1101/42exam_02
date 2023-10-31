#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
					break;
				j++;
			}
			if (!argv[2][j])
			{
				write(1, "0\n", 2);
				return (0);
			}
			i++;
		}
		if (!argv[1][i])
			write(1, "1", 1);
	}
	write (1, "\n", 1);
}
