/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:29:09 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/21 18:10:01 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d_tmp;
	char *s_tmp;

	d_tmp = (char *)dst;
	s_tmp = (char *)src;
	if (dst == src)
		return (dst);
	if (s_tmp < d_tmp)
	{
		while (len--)
			*(d_tmp + len) = *(s_tmp + len);
		return (dst);
	}
	while (len--)
		*d_tmp++ = *s_tmp++;
	return (dst);
}
