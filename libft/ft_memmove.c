/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:29:09 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/19 21:29:34 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				len_tmp;
	unsigned char		cpy[len];
	unsigned char		*src_tmp;
	unsigned char		*dst_tmp;

	len_tmp = len;
	src_tmp = (unsigned char *)src;
	dst_tmp = (unsigned char *)dst;
	if (!len || (!dst && !src))
		return (dst);
	while (len_tmp--)
		cpy[len_tmp] = *(src_tmp + len_tmp);
	while (len--)
		*(dst_tmp + len) = cpy[len];
	return (dst);
}
