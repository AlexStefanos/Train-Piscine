#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	char *str = "salut a tous";
	int len;

	len = ft_strlen(str);
	printf("%d", len);
}
