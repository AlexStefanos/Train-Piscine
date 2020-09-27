void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int buffer;

	i = 0;
	j = 1;
	while (i <= size)
	{
		while (j <= size)
		{
			if (tab[i] < tab[j])
			{
				buffer = tab[i];
				tab[i] = tab[j];
				tab[j] = buffer;
				i = 0;
			}
			j++;
		}
		i++;
		j = 0;
	}
}
