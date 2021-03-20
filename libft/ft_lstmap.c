/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddomingu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 20:01:10 by ddomingu          #+#    #+#             */
/*   Updated: 2021/03/20 16:40:28 by ddomingu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *list;

	if (!lst)
		return (NULL);
	list = ft_lstnew(f(lst->content));
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = ft_lstnew(f(lst->content))))
		{
			del(list->next);
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}
