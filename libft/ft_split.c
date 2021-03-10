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
	size_t wrds;
	int i;

	if (!s)
		return (NULL);
	
	wrds = 1;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{	
			wrds++;
			while (*(s + i) == c)
				i++;
		}	
		else
			i++;
	}
	

	







	









}
