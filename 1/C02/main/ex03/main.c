int	ft_str_is_numeric(char *str);

#include <stdio.h>

int	main()
{
	char str[11] = "0123456789\0";
	char str2[11] = "0123455789\0";
	
	printf("%d\n%d\n", ft_str_is_numeric(str), ft_str_is_numeric(str2));
}
