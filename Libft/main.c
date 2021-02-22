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



	//ft_strlcat
	char dest[20];
	const char src[]="quetal";
	size_t size = 4;
	char dest2[20];
	const char src2[]="quetal";
	size_t size2 = 4;

	printf("********ft_strlcat********* \n");
	printf("remake = %zu", ft_strlcat(dest, src, size));
	printf("\noriginal = %lu", strlcat(dest2, src2, size2));
	printf("\n");
	printf("remake dest = %s", dest);
	printf("\noriginal dest = %s", dest2);
	printf("\n");


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
	
	
	//ft_strchr
	const char s[]="ho latu";
	int c = 97;
	const char s2[]="ho latu";
	int c2 = 97;
	printf("********ft_strchr********* \n");
	printf("remake = %s", ft_strchr(s, c));
	printf("\noriginal = %s", strchr(s2, c2));
	printf("\n");

	//ft_strrchr
	const char sr[]="iffadaaho al ltu";
	int cr = 97;
	const char sr2[]="iffadaaho al ltu";
	int cr2 = 97; 
	printf("********ft_strrchr********* \n");
	printf("remake = %s", ft_strrchr(sr, cr));
	printf("\noriginal = %s", strrchr(sr2, cr2));
	printf("\n");
*/

	//ft_strnstr
//	const char hay[]="holaquetal";
//	const char need[] = "zeta";
//	size_t len = 4;
	const char hay2[]="holaquetal";
	const char need2[] = "hola";
	size_t len2 = 4;
	printf("********ft_strnstr********* \n");
	//printf("remake = %s", ft_strnstr(hay, need, len));
	printf("\noriginal = %s", strnstr(hay2, need2, len2));
	printf("\n");
}
