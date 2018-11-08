#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	i;
	char	*abc;
	
	i = 0;
	abc = "abcdefghijklmnopqrstuvwxyz";
	while (abc[i] != '\0')
		i++;
	while (i != (0 - 1))
	{
		ft_putchar(abc[i]);
		i--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
