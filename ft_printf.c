/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:25:14 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/13 10:25:16 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type_handler(char c, va_list args)
{
	if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (c == 's')
		return (ft_prtstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_prtnbr(va_arg(args, int)));
	else if (c == 'p')
		return (ft_prtptr(va_arg(args, void *)));
	else if (c == 'u')
		return (ft_prtunsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_prthex(va_arg(args, unsigned int), false));
	else if (c == 'X')
		return (ft_prthex(va_arg(args, unsigned int), true));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	j;
	va_list	args;

	if (!format)
		return (0);
	i = 0;
	j = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			j += ft_type_handler(format[i], args);
		}
		else
		{
			j += write (1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (j);
}
