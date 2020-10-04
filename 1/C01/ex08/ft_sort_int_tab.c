void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int buffer;

	i = 0;
	j = 1;
	buffer = 0;
	while (i <= size)
	{
		while (j <= size)
		{
			if (tab[i] >= tab[j])
				j++;
			else
			{
				buffer = tab[i];
				tab[i] = tab[j];
				tab[j] = buffer;
			}
		}
		i++;
		j = 0;
	}
}
