int	ft_str_is_uppercase(char *str);

#include <stdio.h>

int	main()
{
	char str[10] = "QWERTYUIOP";
	char str2[10] = "QWERTYuIOP";
	
	printf("%d\n%d\n", ft_str_is_uppercase(str), ft_str_is_uppercase(str2));
}
