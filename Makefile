# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marnguye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 16:38:09 by marnguye          #+#    #+#              #
#    Updated: 2023/11/18 16:38:21 by marnguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CFLAGS	=	-Wall -Werror -Wextra

CC		=	cc

RM		=	rm -f

SRC		=	ft_print_hex.c ft_print_percentage.c	\
			ft_print_pointer.c ft_print_string.c	\
			ft_print_string.c	ft_print_unsigned.c	\
			ft_printf.c ft_printf.h ft_putchar.c	\
			ft_putnbr.c ft_putstr.c	ft_printf.h		\
			ft_print_number.c	\

OBJS 		= $(SRC:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
		@$(CC) $(FLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:
		@$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY: all, bonus, clean, fclean, re
