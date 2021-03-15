/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 19:22:04 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/15 18:23:48 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nbr_counter(int n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0 && ++len)
		n /= 10;
	return (len);
}

char		*ft_itoa(int n)
{

	char	*str;
	int		len;

	len = ft_nbr_counter(n);
	str =(char *) malloc(len + 1 * (sizeof(char)));
	if (!str)
		return (NULL);
	
	*(str + len) = '\0';

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));

	if (n < 0)
	{
		*(str) = '-';
		n *= -1;
	}

	else if (n == 0)
		*(str) = '0';
	
	while (n && len--)
	{
		*(str + len) = (n % 10) + '0';
		n /= 10;
	}	

	return (str);
}

