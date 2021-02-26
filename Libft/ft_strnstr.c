/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:18:36 by ddomingu          #+#    #+#             */
/*   Updated: 2021/02/26 16:57:08 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	
	if (!*(needle))
		return ((char *) haystack);
    
	i = 0;
	while (*(haystack + i) && i < len && len != 0 )
    	{
        	j = 0;
		if (*(haystack + i) == *(needle + j))
		{
			while(*(needle + j) && *(needle + j) == *(haystack + (i + j)) && ((i + j) < len))
			{
					if (j == ft_strlen(needle) - 1)
					return ((char *) haystack + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
