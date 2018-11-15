#include "ft_putchar.c"

void	ft_first_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('A');
	if (x > 2)
	{
		while (i != (x - 2))
		{
			ft_putchar('B');
			i++;
		}
	}
	if (x > 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	ft_middle_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('B');
	if (x > 2)
	{
		while (i != (x - 2))
		{
			ft_putchar(' ');
			i++;
		}
	}
	if (x > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	ft_last_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('C');
	if (x > 2)
	{
		while (i != (x - 2))
		{
			ft_putchar('B');
			i++;
		}
	}
	if (x > 1)
		ft_putchar('C');
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
		ft_last_line(x);
}
