/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:10:57 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/02 22:09:50 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list			*temp_var;

	i = 0;
	temp_var = (t_list *)lst;
	while (temp_var)
	{
		i++;
		temp_var = temp_var->next;
	}
	return (i);
}
