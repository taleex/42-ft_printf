# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: username <username@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/10 13:13:54 by username          #+#    #+#              #
#    Updated: 2026/11/12 10:33:55 by username         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -f
NAME = libftprintf.a

SRCS = ft_printf.c src/ft_prthex.c src/ft_prtnbr.c src/ft_prtptr.c src/ft_prtstr.c\
src/ft_prtunsigned.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)
fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re

# For testing:
main: re
	$(CC) $(CFLAGS) test/main.c $(NAME) -o test/test

fcmain: fclean
	$(RM) test/test

rb: fcmain main
