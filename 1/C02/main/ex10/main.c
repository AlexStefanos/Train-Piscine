unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#include <stdio.h>

int	main()
{
	char dest[11] = "";
	char src[11] = "qwertyuiop\0";
	unsigned int size = 6;
	
	printf("%d\n", ft_strlcpy(dest, src, size));
}
