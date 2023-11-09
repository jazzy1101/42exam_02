#include <unistd.h>
int	ft_strlen(char *s)
{
	int	i = 0;
	while (s[i])
		i++;
	return i;
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if (argc == 3)
	{
		while(argv[1][i] && argv[2][j])
		{
			if (argv[1][i] != argv[2][j])
				j++;
			else
			{
				i++;
				j++;
			}
		}
		if (!argv[1][i])
		{
			j = 0;
			while (argv[1][j])
			{
				write(1, &argv[1][j], 1);
				j++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
