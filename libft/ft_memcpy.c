/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:11:23 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/08 17:45:58 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	
	unsigned char *dst_tmp;
	unsigned char *src_tmp;

	dst_tmp = (unsigned char *) dst;
	src_tmp = (unsigned char *) src;
	if (dst || src)
	{
		while (len--)
			*(dst_tmp + len) = *(src_tmp + len); 	
	}
	return (dst);
}
