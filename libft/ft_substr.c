/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:51:32 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/08 18:29:59 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	
	if (!s)
		return (NULL);

	sub = (char *) ft_calloc((len + 1), sizeof(char));
	
	if (!sub)
		return (NULL);

	if (start > ft_strlen(s))
	{
		sub = (char *) ft_calloc((len + 1), sizeof(char));
		return (sub);
 	
	}
	return ((char *) ft_memcpy(sub, (s + start), len));
}
