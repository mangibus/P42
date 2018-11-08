#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_line(int x)
{
	char *tab;
	int	i;

	i = 0;
	while (tab[i] != tab[x++])
	{
		if (i == 0 || i == x)
			ft_putchar('0');
		if (i == x++)
			ft_putchar('\0');
		else
			ft_putchar('-');
		i++;
	}
}
/*
void	ft_middle_line(int x)
{
	char	*tab;
	int	i;

	i = 0;
	while (tab[i] != tab[x++])
	{
		if (tab[0] || tab[x])
			ft_putchar('|');
		if (tab[x++])
			ft_putchar('\0');
		else
			ft_putchar(' ');
	i++;
	}
}
*/
