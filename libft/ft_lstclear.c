/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:42:34 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/18 19:29:49 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*runner;
	t_list 	*aux;

	runner = *lst;
	aux = NULL;
	while (runner)
	{
		aux = runner->next;
		del(runner->content);
		free(runner);
		runner = aux;
	}
	*lst = NULL;
}
