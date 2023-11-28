#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**tab;
	int	i = 0;
	int	j = 0;
	int	word = 0;
	int	z = 0;
	int	y;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			word++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	i = 0;
	tab = malloc(sizeof(char*) * (word + 1));
	if (!tab)
		return NULL;
	tab[word] = NULL;
	while (str[i] && z < word)
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
                        i++;
		tab[z] = malloc(sizeof(char) * (i - j + 1));
		if (!tab[z])
			return NULL;
		y = 0;
		while (y < i - j)
		{
			tab[z][y] = str[j + y];
			y++;
		}
		tab[z][y] = '\0';
		z++;
	}
	return tab;
}
#include <stdio.h>

int	main()
{
	char *s = "            Here is a test           sentence. 93872 Well let's see         	";
	char **res = ft_split(s);
	int	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return 0;
}			
