/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:24:19 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/14 18:36:36 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{

	size_t wrdcnt;
	int i;
	
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

	return (wrdcnt);
}

static char **ft_reserve_table(char **table, char const *s, char c, size_t wrdcnt)
{
	
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
	
		table[word] = (char *) ft_calloc(k + 1, sizeof(char *));
		if(!table)
			return (NULL);
		word++;
	}
	return (table);
}

static char **ft_fill_table(char **table, char const *s, char c, size_t wrdcnt)
{
	int j;
	int k;
	size_t word;

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
		word++;
	}
	
	return (table);
}

char **ft_split(char const *s, char c)
{
	char **table;
	size_t wrdcnt;

	if (!s)
		return (NULL);

	table =(char **) ft_calloc(ft_wordcount(s, c) + 1, sizeof(char *));
	
	if (!table)
		return(NULL);
	wrdcnt = ft_wordcount(s, c);

	table = ft_reserve_table(table, s, c, wrdcnt);
	table = ft_fill_table(table, s, c, wrdcnt);

	return(table);
}
