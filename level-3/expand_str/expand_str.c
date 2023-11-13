#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if (argc == 2)
	{
		if (!argv[1][0])
		{
			write(1, "\n", 1);
			return 0;
		}
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
                                i++;
		while (argv[1][i])
		{
			if(argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{	
				j = 0;
				while (argv[1][i + j] && (argv[1][i + j] == ' ' || argv[1][i + j] == '\t'))
					j++;
				if (argv[1][i + j])
				{
					i += j - 1;
					write(1, "   ", 3);
				}
			}
			i++;
		}
		
	}
	write(1, "\n", 1);
	return 0;
}
		
		
