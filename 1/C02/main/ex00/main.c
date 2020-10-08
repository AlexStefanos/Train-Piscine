char	*ft_strcpy(char *dest, char *src);

#include <stdio.h>

int	main()
{
	char dest[13] = "";
	char *src = "bien ou quoi";
	int i;

	i = 0;
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
