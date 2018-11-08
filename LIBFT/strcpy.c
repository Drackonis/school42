char	*strcpy(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str2[i])
		i++;
	while (j < i && str1[j])
	{
		str1[j] = str2[j];
		j++;
	}
	if (str1[j])
		while (str1[j++])
			str1[j] = '\0';
	return (str1);
}
