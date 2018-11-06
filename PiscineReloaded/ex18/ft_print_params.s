
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while  (i < argc)
	{
		ft_putchar(argv[i][j]);
		j++;
	}
	i++;
	j = 0;
	ft_putchar('\n');
}
