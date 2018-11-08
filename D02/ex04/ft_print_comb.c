#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_print_cdu(char c, char d, char u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
	if (c != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	while (c < '8')
	{
		while(d <= '8')
		{
			while (u <= '9')
			{
				ft_print_cdu(c, d, u);
				u++;
			}
			d++;
			u = d + 1;
		}
		c++;
		d = c + 1;
		u = d + 1;
	}
}

int	main(void)
{
ft_print_comb();
return (0);
}
