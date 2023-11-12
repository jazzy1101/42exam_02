#include <unistd.h>
int	check_self(char *s, int pos)
{
	int	i = 0;

	while (i < pos)
	{
		if (s[i] == s[pos])
			return 0;
		i++;
	}
	return 1;		
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{		
			if (check_self(argv[1], i))
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
					{
						write(1, &argv[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}			 
	}
	write(1, "\n", 1);
	return 0;
}
