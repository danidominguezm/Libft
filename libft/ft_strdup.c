/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:19:13 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/19 21:45:58 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *done;

	done = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!done)
		return (NULL);
	return (ft_memcpy(done, s1, ft_strlen(s1) + 1));
}
