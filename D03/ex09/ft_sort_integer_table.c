void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	temp;
	while (size != 0)
	{
		i = 0;
		while (tab[i] != '\0')
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++; 
		}
		size--;
	}
	return(*tab)	
}

void	ft_print_tab(int *tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		ft_putchar(',');
		i++;
	}
}

int	main(void)
{
	int	merde[6] = {55,2,586,48,8,1} ;
	ft_sort_integer_table(merde,6);
}
