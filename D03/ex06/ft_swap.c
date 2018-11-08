#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int *nb)
{
	int nb;

	nb = *nb;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_swap(int *a, int *b)
{
/*
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
*/
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{	
		ft_swap(*argv[1], *argv[2]);
		ft_putnbr(*argv[1]);
		ft_putnbr(*argv[2]);
		ft_putchar('\n');
	}
	return (0);
}
