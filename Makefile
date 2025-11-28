# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stmaire <stmaire@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 11:58:31 by stmaire           #+#    #+#              #
#    Updated: 2025/11/28 12:27:53 by stmaire          ###   ########.fr        #
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

HEADERS = ft_ft_printf.h

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
