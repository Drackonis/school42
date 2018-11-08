#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	j;
	char	*c;

	i = 0;
	while (src[i])
		i++;
	if (!(c = malloc(sizeof(*c) * i)
		return (NULL);
	j = 0;
	while (j < i)
	{
		c[j] = src[j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
