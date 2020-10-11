int	ft_str_is_lowercase(char *str);

#include <stdio.h>

int	main()
{
	char str[10] = "qwertyuiop";
	char str2[10] = "qweRtyuiop";

	printf("%d\n%d\n", ft_str_is_lowercase(str), ft_str_is_lowercase(str2));
}
