/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 18:45:12 by ddomingu          #+#    #+#             */
/*   Updated: 2021/02/27 17:23:30 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int str_len;

	str_len = ft_strlen(s) - 1;
//	printf("string: %s\n", s);
//	printf("str_len: %d\n", str_len);
	if (c == '\0')
		return ((char *) s + (str_len + 1));
	
	while (s[str_len] && str_len >= 0)
	{
		if (s[str_len] == (char) c)
		{
			while (str_len > 0)
			{
				s++;
				str_len--;
			}
			return ((char *) s);
		}
		str_len--;
	}
	return (0);
}
