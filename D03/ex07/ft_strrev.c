#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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

char	*ft_strrev(char *str)
/*
{
	int	index;
	int	xedni;
	char	tmp;

	index = 0;
	xedni = ft_strlen(str);
	while (xedni > index)
	{
		tmp = str[xedni];
		str[xedni] = str[index];
		str[index] = tmp;
		index++;
		xedni--;
	}
	return (str);
}
*/
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ft_putchar(str[i]);
	while (i != 0)
	{
		i--;
		ft_putchar(str[i]);
	}
	return(str);	
}

int	main(int ac, char **av)
{
	if (ac > 0)
	{
		ft_strrev(av[1]);
	}
	return (0);
}
