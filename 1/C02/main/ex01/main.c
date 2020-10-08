char	*ft_strncpy(char *dest, char *src, unsigned int n);

#include <stdio.h>

int	main()
{
	char dest[13] = "";
	char *src = "bien ou quoi";
	int i;

	i = 0;
	ft_strncpy(dest, src, 10);
	printf("%s\n", dest);
}
