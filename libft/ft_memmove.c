/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:29:09 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/02 21:36:47 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst_tmp;
	unsigned char *src_tmp;

	dst_tmp = (unsigned char *) dst;
	src_tmp = (unsigned char *) src;	

	if (!len || (!dst && !src))
		return (dst);
	
	if (src_tmp < dst_tmp)
	{
		while (len--)
		{	
			*(dst_tmp + len) = *(src_tmp + len);
		}
	}

	else 
	{
		ft_memcpy(dst, src, len);
	}
	
	return (dst);
}
