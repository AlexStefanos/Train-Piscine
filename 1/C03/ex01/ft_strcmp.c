int	ft_strcmp(char *s1, char *s2, unsigned int n)
{
	int i;

	while (s1[i] != '\0' || s2[i] != '\0' || i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
