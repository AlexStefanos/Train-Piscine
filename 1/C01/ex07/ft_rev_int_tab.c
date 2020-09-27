void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int buffer;
	int mid;

	i = 0;
	j = size;
	if (size / 2 == 0)
		mid = size / 2;
	else
		mid = (size + 1) / 2;
	while (i < mid)
	{
		buffer = tab[i];
		tab[i] = tab[j];
		tab[j] = buffer;
		i++;
		j--;	
	}
}
