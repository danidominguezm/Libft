/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:19:13 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/07 20:55:08 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
	char *done;
	size_t i;
	
	i = ft_strlen(s1);
	done = (char *)malloc(i + 1);
	
	if (!done)
		return (NULL);

	while (i--)
		*(done + i) = *(s1 + i);
	return (done);
}
