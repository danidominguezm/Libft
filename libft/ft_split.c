/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:24:19 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/13 21:22:27 by ddomingu         ###   ########.fr       */
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
	}
	
	char **table;

	table =(char **) ft_calloc(wrdcnt + 1, sizeof(char *));
	if (!table)
		return(NULL);
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
			k++;
			j++;
		}
		table[word] = malloc(sizeof(char) * k + 1);
		
		if(!table)
			return (NULL);
		table[word][k] = '\0';
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
	//	table[word][k] = '\0';	
		word++;
	}
	table[word] = NULL;
	
	return(table);
}
