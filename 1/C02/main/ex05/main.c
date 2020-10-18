int	ft_str_is_uppercase(char *str);

#include <stdio.h>

int	main()
{
	char str[11] = "QWERTYUIOP\0";
	char str2[12] = "QWERTYuIOP\0";
	
	printf("%d\n%d\n", ft_str_is_uppercase(str), ft_str_is_uppercase(str2));
}
