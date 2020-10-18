int	ft_str_is_lowercase(char *str);

#include <stdio.h>

int	main()
{
	char str[11] = "qwertyuiop\0";
	char str2[11] = "qweRtyuiop\0";

	printf("%d\n%d\n", ft_str_is_lowercase(str), ft_str_is_lowercase(str2));
}
