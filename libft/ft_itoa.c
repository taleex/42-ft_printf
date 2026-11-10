/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:45:15 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/01 17:31:50 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_len(long nbr)
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

char	*ft_itoa(int n)
{
	int		len;
	long	nbr;
	char	*res;

	nbr = n;
	len = ft_number_len(nbr);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		len--;
		res[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (res);
}
