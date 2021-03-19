/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:48:56 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/19 21:13:11 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*runner;

	runner = *lst;
	if (!runner)
		*lst = new;
	else
	{
		while (runner->next)
			runner = runner->next;
		runner->next = new;
	}
}
