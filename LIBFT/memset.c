void	*memset(void *str, unsigned int c, size_t n)
{
	int	i;

	i = 0;
	while (i++ < c)
		str[i] = n;
	return (str);
}

