/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:24:00 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/19 21:55:08 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*done;

	if (!s)
		return (NULL);
	done = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!done)
		return (NULL);
	if (s)
	{
		len = 0;
		while (*(s + len) != '\0')
		{
			*(done + len) = f(len, *(s + len));
			len++;
		}
		*(done + len) = '\0';
	}
	return (done);
}
