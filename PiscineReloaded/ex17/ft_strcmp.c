
int	ft_strcmp(char *s1, char *s2)
{
	int	n;
	int	index;

	if (s1[0] == 0 && s2[0] == 0)
		return (0);
	index = 0;
	while (s1[index] == s2[index])
	{
		index++;
		if (s1[index] == '\0' && s2[index] == '\0')
			return (0);
	}
	n = (s1[index] - s2[index]);
	return (n);
}
