#include <stdlib.h>
int	ft_strlen(char *s)
{
	int	i = 0;
	
	while (s[i])
		i++;
	return i;
}

char	*ft_strdup(char *src)
{
	char	*buf;

	buf = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!buf)
		return NULL;
	while (src[i] && i < ft_strlen(src))
	{
		buf[i] = src[i];
		i++;
	}
	buf[i] = '\0';
	return buf;	
}
