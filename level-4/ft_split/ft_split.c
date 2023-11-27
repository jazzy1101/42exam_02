#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**tab;
	int	i = 0;
	int	j;
	int	z;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;

