/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:11:14 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/19 21:25:15 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;
	size_t			i;

	i = -1;
	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	while (++i < n)
	{
		*(dst_tmp + i) = *(src_tmp + i);
		if ((unsigned char)c == *(src_tmp + i))
			return (dst + i + 1);
	}
	return (NULL);
}
