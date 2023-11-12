char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	j = 0;

//don't forget to chech params!!
	if (!s1 || !s2)
		return 0;

	while (*s1)
	{
		j = 0;
		while (s2[j])
		{
			if (*s1 == s2[j])
				return (char *)s1;
			j++;
		}
		s1++;
	}
	return 0;
}
#include <stdio.h>
int	main()
{
	char	s1[] = "Hi, BONJOUR!";
	char	s2[] = "ABCDEFGHIJK";
	char	*res = ft_strpbrk(s1, s2);
	printf("%c\n", *res);
	return 0;
}
