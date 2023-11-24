#include <unistd.h>
int	ft_double(char c, char *s, int n)
{
	int	i = 0;

	while(i < n)
	{
		if (s[i] == c)
			return 0;
		i++;
	}
	return 1;
}
int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;
	int	z = 0;

	if (argc == 3)
	{
		while (argv[1][i])
			i++;
		while (argv[2][j])
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		i--;
		while(z <= i)
		{
			if (ft_double(argv[1][z], argv[1], z) == 1)
				write(&argv[1][z], 1);
			z++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
