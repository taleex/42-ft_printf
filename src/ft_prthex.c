/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:33:03 by username          #+#    #+#             */
/*   Updated: 2026/11/11 16:34:12 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_digit(unsigned int nbr)
{
	size_t	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr/= 16;
		i++;
	}
	return (i);
}

static void	ft_puthex(unsigned int nbr, bool case_sense)
{
	char hex_lower[] = "0123456789abcdef";
	char hex_upper[] = "0123456789ABCDEF";

	if (nbr >= 16)
	{
		ft_puthex((nbr/16), case_sense);
	}
	if (case_sense)
		ft_putchar_fd(hex_upper[nbr % 16], 1);
	else
		ft_putchar_fd(hex_lower[nbr % 16], 1);
}

int	ft_prthex(unsigned int hex, bool case_sense)
{
	ft_puthex(hex, case_sense);
	return (ft_hex_digit(hex));
}
