
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb > 1)
	{
		while (i >= nb)
		{
			n *= i;
			i++;
		}
		return (n);
	}
	else
		return (0);
}
