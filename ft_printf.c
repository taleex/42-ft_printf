/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:04:27 by username          #+#    #+#             */
/*   Updated: 2026/11/10 15:27:01 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type_handler(char c, va_list args)
{
	if (c == '%')
		return (write(1,"%",1));
	else if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (c == 's')
		return (ft_prtstr(va_arg(args, char *)));
	else if (c == 'd')
		ft_putnbr_fd(va_arg(args, int), 1);

	return (0);
}

int	ft_printf(const char *format, ...)
{
	size_t i;
	va_list args;

	i = 0;
	if (!format)
		return (0);

	va_start(args, format);

	while (format[i])
	{
		if(format[i] == '%')
		{
			i++;
			ft_type_handler(format[i],args);
		}
		else
		{
			write (1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (i);
}
