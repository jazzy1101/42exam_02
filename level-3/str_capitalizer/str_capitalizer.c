#include <unistd.h>
void	ft_lowercase(char **str)
{
	int	i = 1;
	int	j;

	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] >= 'A' && str[i][j] <= 'Z')
				str[i][j] += 32;
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i = 1;
	int	j;

	if (ac > 1)
	{
		ft_lowercase(av);
		while (av[i])
		{
			j = 1;
			if (av[i][0] >= 'a' && av[i][0] <= 'z')
			{
				av[i][0] -= 32;
				write(1, &av[i][0], 1);
			}
			while (av[i][j])
			{
				if ((av[i][j] == ' ' || av[i][j] == '\t') && (av[i][j + 1] >= 'a' && av[i][j + 1] <= 'z'))
					av[i][j + 1] -= 32;
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}
