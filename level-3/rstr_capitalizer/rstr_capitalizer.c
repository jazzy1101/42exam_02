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

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j;

	if (argc > 1)
	{
		ft_lowercase(argv);
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || !argv[i][j + 1]))
					argv[i][j] -= 32;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
	return 0;	
}
