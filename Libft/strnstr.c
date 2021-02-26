#include <string.h>
#include <stdio.h>
/*
 * Find the first occurrence of find in s, where the search is limited to the
 * first slen characters of s.
 */
char 	*strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}
int	main()
{
	const char s[]="";
        const char find[] = "";
        size_t slen = 4;
        //const char hay2[]="holaquetal";
        //const char need2[] = "hola";
        //size_t len2 = 4;
        printf("********ft_strnstr********* \n");
        printf("remake = %s", ft_strnstr(hay, need, len));
        //printf("\noriginal = %s", strnstr(hay2, need2, len2));
        printf("\n");
}
