#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;
	char	*abc;
	
	i = 0;
	abc = "abcdefghijklmnopqrstuvwxyz";
	while (abc[i] != '\0')
	{
		ft_putchar(abc[i]);
		i++;
	}
}
