/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 19:00:40 by ddomingu          #+#    #+#             */
/*   Updated: 2021/02/28 20:44:02 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int res;

	res = 0;
	i = 0;
	sign = 1;
	while (*(str + i) == '\t' || *(str + i) == '\n'
			|| *(str + i) == '\v' || *(str + i) ==  '\f' 
			|| *(str + i) == '\r' || *(str + i) == ' ')
		i++;
	
	if (*(str +i) == '-' || *(str + i) == '+')
	{
		sign = (*(str + i) == '-' ? -1 : 1);
		i++;
	}	
	while (*(str + i) >= '0' && *(str + i) <= '9' && *(str + i))
		res = res * 10 + (*(str + i++) - '0');

	return (res * sign);
}
