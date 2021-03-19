/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:29:45 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/19 21:50:41 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int i;

	i = 0;
	if (!dst | !src)
		return (0);
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			*(dst + i) = src[i];
			i++;
		}
		*(dst + i) = '\0';
	}
	return (ft_strlen(src));
}
