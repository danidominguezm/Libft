/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:29:09 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/02 20:54:24 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst_tmp;
	unsigned char *src_tmp;
	unsigned char *aux;
	size_t lenaux;

	lenaux = len;
	dst_tmp = (unsigned char *) dst;
	aux = (unsigned char *) src;
	src_tmp = (unsigned char *) src;	

	if (!len || (!dst && !src))
		return (dst);

	while (lenaux--)
	{
		*()
	}
	while (len--)
	{	
		*(dst_tmp + len) = *(src_tmp + len);
	}
	return (dst);
}
