int	max(int *tab, unsigned int len)
{
	int	max = 0;
	unsigned int	i = 0;

	if (!tab)
		return 0;
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return max;
}
#include <stdio.h>

int	main()
{
	int	tab[] = {};
	printf("%d\n", max(tab, sizeof(tab) / sizeof(tab[0])));
	return 0;
}
