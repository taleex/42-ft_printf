/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:25:21 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/13 10:25:22 by jorgferr         ###   ########.fr       */
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
int	ft_prthex(unsigned int hex, bool case_sense);
#endif
