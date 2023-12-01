void	sort_int_tab(int *tab, unsigned int size)
{
	int	tmp = 0;

	if (tab)
	{
		unsigned int	i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				i = 0;
			}
			else
				i++;
		}
	}
}
#include <stdio.h>

int	main()
{
	int	i = 0;
	int	arr[] = {1, 0, 8, 4, 2};
	sort_int_tab(arr, 5);
	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}
