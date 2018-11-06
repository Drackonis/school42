
void	ft_putchar(int w)
{
	printf(w);
}

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar(i);
		i++;
}

int	main()
{
	ft_print_alphabet();
}
