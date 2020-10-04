void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int size2;
	int buffer;
	int mid;

	i = 0;
	buffer = 0;
	if (size % 2 != 0)
		size2 = size + 1;
	else
		size2 = size;
	while (i != size2)
	{
		buffer = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = buffer;
		i++;
		size2--;
		size--;
	}
}
