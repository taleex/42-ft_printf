/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:59:47 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/29 14:26:21 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_ls;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_ls = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&new_ls, del);
			return (NULL);
		}
		ft_lstadd_back(&new_ls, node);
		lst = lst->next;
	}
	return (new_ls);
}
