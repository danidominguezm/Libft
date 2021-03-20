/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 18:00:33 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/20 16:13:02 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int end;
	int start;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		start++;
	end = ft_strlen(s1 + start);
	if (end)
		while (*(s1 + end - 1) && ft_strchr(set, *(s1 + end + start - 1)))
			end--;
	return (ft_substr(s1, start, end));
}
