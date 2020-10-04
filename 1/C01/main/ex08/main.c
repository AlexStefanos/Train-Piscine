#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main()
{
	int tab[] = {2,4,3,5};
	int i;
	int size;

	i = 0;
	size = 4;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}
