#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n < 10)
		ft_putchar(nb + '0');
	if (n > 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}	
}

void	ft_print_combn(int n)
{
	char *comb;
	if (n > 0 && n <= 9)
	{
		while (n != 0)
		{
			comb[n]
			n--;
		}
	}
	else
		return (0);
}

int	main(void)
{
	ft_print_combn(5);
	return (0);
}
