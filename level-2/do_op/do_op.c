#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char ** argv)
{
	int	res = 0;

	if (argc == 4)
	{
		if (*argv[2] == '+') 
			res = atoi(argv[1]) + atoi(argv[3]);
		else if (*argv[2] == '-')
			res = atoi(argv[1]) - atoi(argv[3]);
		else if (*argv[2] == '*')
			res = atoi(argv[1]) * atoi(argv[3]);
		else if (*argv[2] == '/')
			res = atoi(argv[1]) / atoi(argv[3]);
		else if (*argv[2] == '+')
			res = atoi(argv[1]) + atoi(argv[3]);
		printf("%d", res);
	}
	printf("\n");
	return 0;
}
