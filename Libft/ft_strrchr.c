/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 18:45:12 by ddomingu          #+#    #+#             */
/*   Updated: 2021/02/21 21:01:59 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int str_len;

	str_len = ft_strlen(s) - 1;
	while (s[str_len--] >= 0)
	{
		if (s[str_len] == (char) c)
		{
			while (str_len-- > 0)
				s++;
			return ((char *) s);
		}
	}
	return (0);
}
