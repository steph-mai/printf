NAME =  libftprintf.a

CC = cc
CFLAGS = -Werror -Wextra -Wall -I libft

SRCS = ft_printf.c ft_protected_write.c \
ft_printf_str.c ft_select_function.c \
ft_printf_ptr.c ft_printf_int.c \
ft_printf_unsigned.c ft_printf_lowhexa.c \
ft_putnbr_hexa.c ft_printf_uphexa.c \
ft_putnbr_uphexa.c ft_printf_modulo.c\


HEADERS = printf.h

OBJ = $(patsubst %.c,%.o,$(SRCS))

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re 
