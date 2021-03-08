/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:30:17 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/08 21:09:38 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *joined;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	
	joined = (char *) ft_calloc((len1 + len2 + 1), sizeof(char));
	
	if (!joined)
		return(NULL);

	ft_memcpy(joined, s1, len1);
	ft_memcpy((joined + len1), s2, len2 + 1);	

	return (joined);
}
