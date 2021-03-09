/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:00:33 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/09 20:21:47 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
		int	i;
		int j;
		int lenset;
		int start;


		lenset = ft_strlen(set);
		start = 0;
		if (!s1)
			return (NULL);
				
		i = 0;
		while(*(s1 + i))
		{
			j = 0;
			i = 0;
			while (j < lenset)
			{
				if (*(s1 + i) == *(set + j))
				{
					i++;
					start++;
					j = -1;
				}
				j++;
			}
			i++;
		}
		return (ft_substr(s1, start, 2));



}
