#include "ft_putchar.c"

void	ft_first_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	if (x > 2)
	{
		while (i != (x - 2))
		{
			ft_putchar('-');
			i++;
		}
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	ft_middle_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('|');
	if (x > 2)
	{
		while (i != (x - 2))
		{
			ft_putchar(' ');
			i++;
		}
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	ft_colle(int x, int y)
{
	int	h;
	
	h = 0;
	ft_first_line(x);
	if (y > 2)
	{
		while (h != (y - 2))	
		{
			ft_middle_line(x);
			h++;
		}
	}
	if (y > 1)
		ft_first_line(x);
}
