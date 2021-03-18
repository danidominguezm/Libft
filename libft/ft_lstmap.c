/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 20:01:10 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/18 20:17:57 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	
	
	t_list *new;

	new = NULL;

	if (!lst)
		return NULL ;

	while (lst)
	{
		new =(t_list *) f(lst->content);
		lst = lst->next;
		new = new->next;
	}





}
