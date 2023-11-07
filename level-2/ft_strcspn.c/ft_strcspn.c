
#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	return i;
}
#include <string.h>
int	main()
{
	printf("%zu vs %zu\n", ft_strcspn("abc", "abcd"), strcspn("abc", "abcd"));
	printf("%zu vs %zu\n", ft_strcspn("43abc", "abcd"),strcspn("43abc", "abcd"));
	printf("%zu vs %zu\n", ft_strcspn("ab34c", "abcd"), strcspn("ab34c", "abcd"));
	printf("%zu vs %zu\n", ft_strcspn("cbd.", "abcd"), strcspn("cbd.", "abcd"));
	printf("%zu vs %zu\n", ft_strcspn("46832abc", "abcd"), strcspn("46832abc", "abcd"));
}
