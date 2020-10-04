#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main()
{
	int a;
	int b;
	int *ptr_a;
	int *ptr_b;

	a = 22;
	b = 3;
	printf("a : %d , b : %d\n", a, b);
	ptr_a = &a;
	ptr_b = &b;
	ft_swap(ptr_a, ptr_b);
	printf("a : %d , b : %d\n", a, b);
}
