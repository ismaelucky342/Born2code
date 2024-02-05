/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:07:38 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/30 20:51:44 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;

	if (!f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		(current = ft_lstnew((*f)(lst->content)))
			if (!current)
		{
			while (new_list)
		{
			current = new_list->next;
			(*del)(new_list->content);
			free(new_list);
			new_list = current;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new_list, current);
		lst = lst->next;
	}
	return (new_list);
}
