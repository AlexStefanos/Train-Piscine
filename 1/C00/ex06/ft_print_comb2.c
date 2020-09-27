#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int a, int b, int c, int d)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(' ');
	ft_putchar(c + 48);
	ft_putchar(d + 48);
	if (!(a == 9 && b == 8 && c == 9 && d == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = -1;
	while (a++ < 9)
	{
		b = -1;
		while (b++ < 9)
		{
			c = -1;
			while (c++ < 9)
			{
				d = -1;
				while(d++ < 9)
				{
					if (((a * 10 + b) < (c * 10 + d)))
						ft_putint(a, b, c, d);
				}
			}
		}
	}
}
