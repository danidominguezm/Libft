#include <string.h>
#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
		dest++;	
	}

	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		*dest = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';

	j = 0;
	while (src[j] != '\0')
		j++;

	return (i + j);
}

int	main()
{
	char dest[10]="holaaaa";
	char src[]="quetal";
	unsigned int size = 4;
	char dest2[10]="holaaaa";
	char src2[]="quetal";

	printf("%u", ft_strlcat(dest, src, size));
	printf("\n%lu", strlcat(dest2, src2, 4 ));
	printf("\n%s", dest);
	printf("\n%s", dest2);
}
