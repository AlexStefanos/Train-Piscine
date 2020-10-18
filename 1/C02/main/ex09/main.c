char	*ft_strcapitalize(char *str);

#include <stdio.h>

int	main()
{
	char str[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\0";

	printf("%s\n", ft_strcapitalize(str));
}
