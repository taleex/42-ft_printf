/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:32:27 by username          #+#    #+#             */
/*   Updated: 2026/11/12 10:56:06 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsigned_digits(unsigned int nbr)
{
	size_t	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

static void	ft_putunsigned(unsigned int nbr)
{
	static char	digits[] = "0123456789";

	if (nbr > 9)
		ft_putunsigned (nbr / 10);
	ft_putchar_fd(digits[nbr % 10], 1);
}

int	ft_prtunsigned(unsigned int nbr)
{
	ft_putunsigned(nbr);
	return (ft_unsigned_digits(nbr));
}
