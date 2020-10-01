unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int length_src;

	i = 0;
	length_src = 0;
	if (!(size > 0))
		return (0);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i])
	{
		dest[i] = '\0';
		i++;
	}
	while (src[length_src])
		length_src++;
	return (length_src);
}
