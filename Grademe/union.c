#include <unistd.h>

int	ft_strchr(char *s, char c, int k)
{
	int	i = 0;
	while (i < k)
	{
		if (s[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	
	if (ac == 3)
	{
		while (av[1][i])
			i++;
		while (av[2][j])
			av[1][i++] = av[2][j++];
		i = 0;
		while (av[1][i])
		{
			if (ft_strchr(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
