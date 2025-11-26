/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romukena <romukena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:21:08 by romukena          #+#    #+#             */
/*   Updated: 2025/04/30 23:16:14 by romukena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*data;

	new_list = NULL;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		data = f(lst->content);
		new_node = ft_lstnew(data);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			del(data);
			return (0);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
