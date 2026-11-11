/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:45:07 by username          #+#    #+#             */
/*   Updated: 2026/11/11 12:13:44 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_prtstr(char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	else
		return (write(1, str, ft_strlen(str)));
}
