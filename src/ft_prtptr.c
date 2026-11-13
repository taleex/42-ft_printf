/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prtptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:21:05 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/13 10:21:07 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_digits(unsigned long long nbr)
{
	size_t	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 16;
		count++;
	}
	return (count);
}

static void	ft_put_ptr(unsigned long long ptr)
{
	static char	hex[] = "0123456789abcdef";

	if (ptr >= 16)
		ft_put_ptr(ptr / 16);
	ft_putchar_fd(hex[ptr % 16], 1);
}

int	ft_prtptr(void *ptr)
{
	if (!ptr)
		return (write(1, "(nil)", 5));
	ft_putstr_fd("0x", 1);
	ft_put_ptr((unsigned long long)ptr);
	return (ft_ptr_digits((unsigned long long)ptr) + 2);
}
