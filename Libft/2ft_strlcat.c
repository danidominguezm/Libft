/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:44:08 by ddomingu          #+#    #+#             */
/*   Updated: 2021/02/20 15:03:03 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
size_t	twoft_strlcat(char *dst, const char *src, size_t size)
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

int	main()
{
	char dest[10]="holaaaa";
	char src[10]="quetal";
	unsigned int size = 4;

	char dest2[10]="holaaaa";
	char src2[10]="quetal";
	unsigned int size2 = 4;
	printf("********ft_strlcat********* \n");
	printf("remake = %zu", ft_strlcat(dest, src, size));
	printf("\noriginal = %s", strncat(dest2, src2, size2));
	printf("\n");
}
