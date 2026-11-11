#ifndef FT_PRINTF_h
# define FT_PRINTF_h

#include "libft/libft.h"
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
#include <stdbool.h>

int	ft_printf(const char *format, ...);
int	ft_prtstr(char *str);
int	ft_prtnbr(int n);
int	ft_prtunsigned(unsigned int nbr);
int	ft_prtptr(void * str);
int	ft_prthex(ssize_t hex, bool case_sense);



#endif
