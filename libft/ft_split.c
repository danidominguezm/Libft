/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:24:19 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/10 21:49:41 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t wrdcnt;
	int i;

	if (!s)
		return (NULL);
	
	wrdcnt = 1;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{	
			wrdcnt++;
			while (*(s + i) == c)
				i++;
		}	
		else
			i++;
	}
	printf("wrdcnt:%zu\n", wrdcnt);	
	char **table;

	table = malloc(sizeof(char *) * wrdcnt + 1);
	size_t	word;
	int 	j;
	int 	k;

	
	word = 0;
	j = 0;	
	while (word <= wrdcnt && *(s + j))
	{
		k = 0;
		while (*(s + j) != c)
		{
			j++;
			k++;
		}
		while (*(s + j) == c)
			j++;
		
		table[word] = malloc(sizeof(char) * k + 1);	
		word++;

	}
	
	word = 0;
	j = 0;
	while (word <= wrdcnt && *(s + j))
	{
		k = 0;
		while (*(s + j) != c)
		{
			table[word][k] = *(s + j);
			k++;
			j++;
		}
		while (*(s + j) == c)
			j++;
		table[word][k] = 'A';	
		word++;
		printf("word:%zu\n", word);
	}
	table[word] = NULL;
	return(table);
}
