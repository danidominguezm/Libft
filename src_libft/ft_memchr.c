/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:11:37 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/19 21:26:58 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_tmp;

	s_tmp = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if ((unsigned char)c == *(s_tmp + i))
			return ((void *)s + i);
	return (NULL);
}
