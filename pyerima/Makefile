NAME = libftprintf.a
SOURCES = ft_print_char.c ft_printf.c ft_print_format.c ft_print_hex_upper.c ft_print_unsigned_decimal.c \
	ft_print_digit.c ft_print_hex_lower.c ft_print_string.c ft_print_void.c

	
OBJECTS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc
all: $(NAME)
$(NAME): $(OBJECTS)
	$(AR) -r $@ $?
%.o: %.c
	$(CC) -c $(CFLAGS) $?
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all bonus clean fclean re