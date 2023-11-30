#include <unistd.h>

int	main(int ac, char **av)
{
	int	 i = 0;
	int	num = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				num = av[1][i] - 96;
				while (num)
				{
					write(1, &av[1][i], 1);
					num--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                        {
                                num = av[1][i] - 64;
                                while (num)
                                {
                                        write(1, &av[1][i], 1);
                                        num--;
                                }
                        }
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n" , 1);
	return 0;		
}
