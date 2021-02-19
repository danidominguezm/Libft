#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
		dst++;
	}

	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		*dst = src[j];
	i++;
	j++;
	}
	dst[i] = '\0';

	j = 0;
	while (src[j] != '\0')
		j++;

	return (i + j);
}
