char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] <= 64 && str[i - 1] >= 58))
			str[i] -= 32;
		if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] <= 47))
			str[i] -= 32;
		if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] <= 96 && str[i - 1] >= 91))
			str[i] -= 32;
		if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] >= 123 && str[i - 1] <= 127))
			str[i] -= 32;
		i++;
	}
	return (str);
}
