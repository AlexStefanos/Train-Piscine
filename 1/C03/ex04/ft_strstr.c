char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int save_i;
	int len_to_find;

	i = 0;
	j = 0;
	save_i = 0;
	while (to_find[len_to_find])
		len_to_find++;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			save_i = i;
			while (to_find[j] == str[i])
			{
				j++;
				i++;
			}
			if (j == len_to_find)
				return (to_find); //verifier
			j = 0;
			i = save_i;
		}
		i++;
	}
	return (0);
}
