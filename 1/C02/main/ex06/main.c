int	ft_str_is_printable(char *str);

#include <stdio.h>

int	main()
{
	char str[25] = "qwertyuiop123456789}{_)(\0";
	char str2[25] = "qwertyuiop123456789 \3\0";

	printf("%d\n%d\n", ft_str_is_printable(str), ft_str_is_printable(str2));
}
