/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:19:54 by username          #+#    #+#             */
/*   Updated: 2026/11/11 12:21:08 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>

int	ft_printf(const char *format, ...);
int	ft_prtstr(char *str);
int	ft_prtnbr(int n);
int	ft_prtunsigned(unsigned int nbr);
int	ft_prtptr(void *str);
int	ft_prthex(ssize_t hex, bool case_sense);
#endif
