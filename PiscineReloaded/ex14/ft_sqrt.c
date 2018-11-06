
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb < 4 || nb > 2147483647)
		return (0);
	while (i < nb)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
