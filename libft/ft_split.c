/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:24:19 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/13 20:36:53 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t wrdcnt;
	int i;

	if (!s)
		return (NULL);
	
	wrdcnt = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			i++;
		else
		{
			wrdcnt++;
			while (*(s + i) != c && *(s + i) != '\0')
				i++;
		}
		//printf("iterador:%i\n", i);
	}
	//printf("wrdcnt:%zu\n", wrdcnt);	
	//printf("i:%i\n", i);
	
	char **table;

	table = malloc(sizeof(char *) * wrdcnt + 1);
	size_t	word;
	int 	j;
	int 	k;

	
	word = 0;
	j = 0;	
	while (word < wrdcnt)
	{
		k = 0;
		while(*(s + j) == c)
			j++;
		while (*(s + j) != c && *(s + j))
		{
			j++;
			k++;
		}
/*		printf("sizeofword:%i\n", k);
		printf("iterator:%i\n", j);
		printf("reserved words:%zu\n", word);
		table[word] = malloc(sizeof(char) * k + 1);	
*/
		table[word] = ft_calloc(k, sizeof(char));
		word++;


	}
	
	word = 0;
	j = 0;
	while (word < wrdcnt)
	{
		k = 0;
		while (*(s + j) == c)
			j++;
		while (*(s + j) != c && *(s + j))
		{
			table[word][k] = *(s + j);
			k++;
			j++;
		}
	//	printf("sizeofactualword:%i\n", k);
	//	printf("word:%zu\n", word);
		table[word][k] = '\0';	
		word++;
		//printf("word:%zu\n", word);
	}
	table[word] = NULL;
	
	return(table);
}
