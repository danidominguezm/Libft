#include "libft.h"

int	main()
{

	//ft_strlen
	printf("********ft_strlen********* \n");
	printf("remake = %zu", ft_strlen("hola"));
	printf("\noriginal = %zu", strlen("hola"));
	printf("\n");

	//ft_strlcat
	char dest[10]="holaaaa";
	char src[]="quetal";
	unsigned int size = 4;

	char dest2[10]="holaaaa";
	char src2[]="quetal";
	unsigned int size2 = 4;
	printf("********ft_strlcat********* \n");
	printf("remake = %zu", ft_strlcat(dest, src, size));
	printf("\noriginal = %u", strncat(dest2, src2, size2));
	printf("\n");
}
