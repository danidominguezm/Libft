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
	size_t size = 0;
	char dest2[20];
	const char src2[]="quetal";
	size_t size2 = 0;

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
	const char sr[]="bonjour";
	int cr = 'b';
	const char sr2[]="bonjour";
	int cr2 = 'b'; 
	printf("********ft_strrchr********* \n");
	printf("remake = %s", ft_strrchr(sr +2, cr));
	printf("\noriginal = %s", strrchr(sr2 +2, cr2));
	printf("\n");


	//ft_strnstr
	const char hay[]="holaquetal";
	const char need[] = "hola";
	size_t len = 4;
	const char hay2[]="holaquetal";
	const char need2[] = "hola";
	size_t len2 = 4;
	printf("********ft_strnstr********* \n");
	printf("remake = %s", ft_strnstr(hay, need, len));
	printf("\noriginal = %s", strnstr(hay2, need2, len2));
	printf("\n");


	//ft_strncmp
	const char comp[]="\200";
	const char comp1[] = "\0";
	size_t n1 = 1;
	const char comp2[]="\200";
	const char comp3[] = "\0";
	size_t n2 = 1;
	printf("********ft_strncmp********* \n");
	printf("remake = %d", ft_strncmp(comp, comp1, n1));
	printf("\noriginal = %d", strncmp(comp2, comp3, n2));
	printf("\n");


	//ft_isalnum
	int	remake = 9;
	int original = 9;
	printf("********ft_isalnum********* \n");
	printf("remake = %d", ft_isalnum(remake));
	printf("\noriginal = %d", isalnum(original));
	printf("\n");

	//ft_isalnum
	int	remascii = 0;
	int originascii = 0;
	printf("********ft_isascii********* \n");
	printf("remake = %d", ft_isascii(remascii));
	printf("\noriginal = %d", isascii(originascii));
	printf("\n");

	//ft_isprint
	int	remasprint = 127;
	int originasprint = 127;
	printf("********ft_isprint********* \n");
	printf("remake = %d", ft_isprint(remasprint));
	printf("\noriginal = %d", isprint(originasprint));
	printf("\n");
	
	//ft_atoi
	const char strft[]=" 	3";
	const char strft2[]=" 	3";
	printf("********ft_atoi********* \n");
	printf("remake = %d", ft_atoi(strft));
	printf("\noriginal = %d",atoi(strft2));




	//ft_memset
	void *s[20];
	int c = 97;
	size_t nbytes = 5;
	printf("********ft_memset********* \n");
	printf("remake = %p", ft_memset(s, c, nbytes));
	void *sog[20];
	int cog = 97;
	size_t nbytesog = 5;
	printf("********ft_memset********* \n");
	printf("original = %p", memset(sog, cog, nbytesog));





	//ft_memcmp
	const void *s1cmp = "holaR";
	const void *s2cmp = "holaS";
	size_t nbytes = 4;
	printf("********ft_memcmp********* \n");
	printf("remake = %d\n", ft_memcmp(s1cmp, s2cmp, nbytes));
	const void *soriginal = "holaR";
	const void *soriginal2 = "holaS";
	size_t nbytesog = 4;
	printf("original = %d\n", memcmp(soriginal, soriginal2, nbytesog));

	//ft_calloc
	size_t countrmk = 
	size_t sizermk = 4;
	printf("********ft_calloc********* \n");
	printf("remake = %d\n", ft_calloc(countrmk, sizermk));
	size_t countog = 
	size_t sizeog = 4;
	printf("original = %d\n", calloc(countog, sizeog));

	//ft_calloc
	
	char const *srem;
	unsigned int startrm;
	size_t lenrm = 4;
	printf("********ft_substr********* \n");
	printf("remake = %d\n", ft_calloc(countrmk, sizermk));
	printf("original = %d\n", calloc(countog, sizeog));
	

	//ft_strjoin
	char const *s1rm = "hola ";
	char const *s2rm = "comoestas";
	printf("%s", ft_strjoin(s1rm, s2rm));

	//ft_strtrim
	char const *s1rm = "\tb\n";
	char const *setrm = "\n";
	printf("********ft_strtrim********* \n");
	printf("trim =%s\n", ft_strtrim(s1rm, setrm));

	//ft_split
	char *split = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char **res = ft_split(split, ' ');
	for (int k = 0; k < 12; k++ && *(res))
	{
		printf("%s", res[k]);
		printf("\n");
	}

	printf("itoa:%s\n", ft_itoa(39593));

	printf("remake:%zu\n", ft_strlcat("rrrrrrrrrrrrrrr","lorem ipsum dolor sit amet", 5));
	printf("original:%zu\n", strlcat("rrrrrrrrrrrrrrr", "lorem ipsum dolor sit amet", 5));
*/
}
