#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_hexa(int hexa, int i)
{
	if (hexa > 15)
	{
		ft_hexa((hexa / 16) + i);
		ft_hexa((hexa / 16) + i);
	}
	else
		ft_putchar(hexa + 48);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	int hexa;

	i = 0;
	hexa = 0;
	while (str[i])
	{
		if (str[i] >= 20 && str[i] <= 126)
			ft_putchar(str[i++]);
		else
		{
			ft_putchar('\\');
			hexa = ft_hexa((int)str[i], i);
		}
	}
}
