int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 20 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
