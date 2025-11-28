# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: steph <steph@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/07 09:13:20 by stmaire           #+#    #+#              #
#    Updated: 2025/11/28 10:41:52 by steph            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a

CC = cc
CFLAGS = -Werror -Wextra -Wall -I .

SRCS_ROOT = ft_select_function.c \
ft_printf.c

SRCS_CONV = conversions/ft_printf_str.c \
conversions/ft_printf_ptr.c \
conversions/ft_printf_int.c \
conversions/ft_printf_unsigned.c \
conversions/ft_printf_lowhexa.c \
conversions/ft_printf_uphexa.c \
conversions/ft_printf_modulo.c

SRCS_UTILS = utils/ft_putnbr_hexa.c \
utils/ft_putnbr_uphexa.c \
utils/ft_protected_write.c \
utils/ft_protected_str.c

SRCS = $(SRCS_ROOT) $(SRCS_CONV) $(SRCS_UTILS)

HEADERS = printf.h

OBJ = $(patsubst %.c,%.o,$(SRCS))

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
