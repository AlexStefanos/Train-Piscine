char	*ft_strlowcase(char *str);

#include <stdio.h>

int	main()
{
	char	str[11] = "QWERTYUIOP\0";

	printf("%s\n", ft_strlowcase(str));
}
