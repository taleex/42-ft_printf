/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:31:34 by username          #+#    #+#             */
/*   Updated: 2026/11/11 12:23:35 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_digits(int nbr)
{
	size_t	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

// static void ft_putnbrs(int n)
// {

// }

int	ft_prtnbr(int n)
{
	int	digits;

	digits = ft_digits(n);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	return (digits);
}
