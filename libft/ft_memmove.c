/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:29:09 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/20 21:46:08 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
/*	size_t				len_tmp;
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
	*/
	unsigned char	*src_tmp;
	unsigned char	*dst_tmp;
	size_t i;
	
	i = 0;
	src_tmp = (unsigned char *)src;
	dst_tmp = (unsigned char *)dst;
	while ( len-- > 0 )
	{
		if (src < dst)
			while (len--)
			{
				*(src_tmp + len) = *(dst_tmp + len);
				len--;
			}
		while (len--)
		{
			*(src_tmp + i) = *(dst_tmp + i);
			len--;
		}
	i++;
	}
	return (dst);
}
