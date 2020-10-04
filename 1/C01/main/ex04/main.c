void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int a;
	int b;
	int *ptr_a;
	int *ptr_b;

	a = 22;
	b = 2;
	ptr_a = &a;
	ptr_b = &b;
	ft_ultimate_div_mod(ptr_a, ptr_b);
}
