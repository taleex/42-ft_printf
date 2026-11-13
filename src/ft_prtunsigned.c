/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:21:56 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/13 10:21:57 by jorgferr         ###   ########.fr       */
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
	char	*digits;

	digits = "0123456789";
	if (nbr > 9)
		ft_putunsigned (nbr / 10);
	ft_putchar_fd(digits[nbr % 10], 1);
}

int	ft_prtunsigned(unsigned int nbr)
{
	ft_putunsigned(nbr);
	return (ft_unsigned_digits(nbr));
}
