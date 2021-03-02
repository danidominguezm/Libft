/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:51:37 by ddomingu          #+#    #+#             */
/*   Updated: 2021/02/26 20:12:51 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < (int) n && (*(s2 + i) != '\0' || *(s1 + i) != '\0'))
	{
		if (( *(s1 + i)) != *(s2 + i))
			return (((unsigned char) *(s1 + i)) -  ((unsigned char) *(s2 + i)));
		i++;
	}
	return (0);
}
