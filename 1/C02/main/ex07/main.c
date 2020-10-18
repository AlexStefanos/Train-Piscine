char	*ft_strupcase(char *str);

#include <stdio.h>

int	main()
{
	char str[11] = "qwertyuiOp\0";

	printf("%s\n", ft_strupcase(str));
}
