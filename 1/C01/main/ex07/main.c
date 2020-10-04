#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int tab[] = {2,5,3,4};
	int i;
	int size;
	
	size = 4;
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}
