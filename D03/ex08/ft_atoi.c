#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
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

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg;
	
	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] != '\0')
	{
/*
		if ((str[i] == '\t' || '\v' || '\n' || '\r' || '\f')
			i++;
		if (str[i] == 43 || 45 )
		{
			if (str[i] == 45)
			{
				neg = -neg;
			}
			i++;
		}
		while (str[i] <= '9' && str[i] >= '0')
		{
			nb = (nb * 10) + (str[i] - 48);
			i++;
		}
*/
		if ((str[i] == '\t' || '\v' || '\n' || '\r' || '\f') &&
		(str[i] == '-' || '+' || '-')
		{
			if (str[i] == '-')
				neg = -1;
			i++;
		}
		if (str[i] == 43 || 45 )
		{
			if (str[i] == 45)
			{
				neg = -neg;
			}
			i++;
		}
		while (str[i] <= '9' && str[i] >= '0')
		{
			nb = (nb * 10) + (str[i] - 48);
			i++;
		}
	}
	return (nb * neg);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(atoi(av[1]));
		ft_putchar('\n');
		ft_putnbr(ft_atoi(av[1]));
		ft_putchar('\n');
		ft_putstr(av[1]);
	}
	return (0);
}
