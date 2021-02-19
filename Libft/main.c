#include "libft.h"
#include <ctype.h>
int	main()
{
/*
	//ft_strlen
	printf("********ft_strlen********* \n");
	printf("remake = %zu", ft_strlen("hola"));
	printf("\noriginal = %zu", strlen("hola"));
	printf("\n");
*/
	//ft_strlcat
	char dest[10]="holaaaa";
	char src[]="quetal";
	unsigned int size = 4;

	char dest2[10]="holaaaa";
	char src2[]="quetal";
	unsigned int size2 = 4;
	printf("********ft_strlcat********* \n");
	printf("remake = %zu", ft_strlcat(dest, src, size));
	printf("\noriginal = %s", strncat(dest2, src2, size2));
	printf("\n");

/*
	//ft_isalpha
	printf("********ft_isalpha********\n");
	printf("remake = %d", ft_isalpha('x'));
	printf("\noriginal = %d", isalpha('x'));
	printf("\n");
	

	printf("\n");
	//ft_isdigit	
	printf("********ft_isdigit********\n");
	printf("remake = %d", ft_isdigit(4));
	printf("\noriginal = %d", isdigit(4));
	printf("\n");
	
	printf("\n");
*/

	//ft_toupper

	printf("********ft_toupper********* \n");
	printf("remake = %d", ft_toupper('b'));
	printf("\noriginal = %d", toupper('b'));
	printf("\n");
	
	//ft_tolower

	printf("********ft_tolower********* \n");
	printf("remake = %d", ft_tolower('c'));
	printf("\noriginal = %d", tolower('c'));
	printf("\n");

	//ft_strlcpy
	char destino[]="hey";
	char source[]="yu";
	size_t sizestrl= 4;

	char destino2[]="hey";
	char source2[]="yu";
	size_t sizestrl2= 4;

	printf("********ft_strlcpy********* \n");
	printf("remake = %zu", ft_strlcpy(destino, source, sizestrl ));
	printf("\noriginal = %lu", strlcpy(destino2, source2, sizestrl2));
	printf("\n");

	printf("destinoremake = %s", destino);
	printf("\ndestino system = %s", destino2);
	printf("\n");
}
