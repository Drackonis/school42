
int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	else
		return(nb * ft_recursive_factorial(nb - 1));
}