int	ft_str_is_alpha(char *str);

#include <stdio.h>

int	main()
{
	char str[11] = "bienouquoi\0";
	char str2[13] = "bien ou quoi\0";

	printf("%d\n%d\n", ft_str_is_alpha(str), ft_str_is_alpha(str2));
}
