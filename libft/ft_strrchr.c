/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 17:24:33 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/20 16:11:29 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	str_len;

	str_len = ft_strlen(s) - 1;
	if (c == '\0')
		return ((char *)s + (str_len + 1));
	while (*s && str_len >= 0)
	{
		if (*(s + str_len) == (char)c)
			return ((char *)s + str_len);
		str_len--;
	}
	return (0);
}
