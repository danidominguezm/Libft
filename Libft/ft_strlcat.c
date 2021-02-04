#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
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
