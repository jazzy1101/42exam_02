#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	char	c;

	if (argc > 1)
	{
		while (argv[i])
			i++;
		i--;
		c = i + '0';
		write(1, &c, 1);
		return 0;
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return 0;
}

