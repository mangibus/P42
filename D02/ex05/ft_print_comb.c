#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_fs(int f,int s)
{
	ft_putchar(f / 10 + '0');
	ft_putchar(f % 10 + '0');
	ft_putchar(' ');
	ft_putchar(s / 10 + '0');
	ft_putchar(s % 10 + '0');
	if (f != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	s = 1;
	while (f <= 98)
	{
		while (s <= 99)
		{
			ft_fs(f, s);
			s++;
		}
		f++;
		s = f + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
