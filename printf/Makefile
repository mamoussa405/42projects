# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 17:46:40 by mamoussa          #+#    #+#              #
#    Updated: 2019/11/12 22:17:43 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_digits_assist.c \
	ft_pointer_printer.c \
	ft_putstr_fd.c \
	ft_strings_precision.c \
	ft_unsigned_digits_printer.c \
	digits_precision.c \
	ft_digits_printer.c \
	ft_printf.c \
	ft_strcapitalize.c \
	ft_strjoin.c \
	hexa_convert.c \
	ft_atoi.c \
	ft_hexa_printer.c \
	ft_strchr.c \
	ft_strlen.c \
	ft_atoim.c \
	ft_itoa.c \
	ft_strdup.c \
	ft_strrev.c \
	udigits_precision.c \
	ft_char_printer.c \
	ft_percent_printer.c \
	ft_putchar_fd.c \
	ft_string_printer.c \
	ft_udigits_assist.c

OBJ =	ft_digits_assist.o \
	ft_pointer_printer.o \
	ft_putstr_fd.o \
	ft_strings_precision.o \
	ft_unsigned_digits_printer.o \
	digits_precision.o \
	ft_digits_printer.o \
	ft_printf.o \
	ft_strcapitalize.o \
	ft_strjoin.o \
	hexa_convert.o \
	ft_atoi.o \
	ft_hexa_printer.o \
	ft_strchr.o \
	ft_strlen.o \
	ft_atoim.o \
	ft_itoa.o \
	ft_strdup.o \
	ft_strrev.o \
	udigits_precision.o \
	ft_char_printer.o \
	ft_percent_printer.o \
	ft_putchar_fd.o \
	ft_string_printer.o \
	ft_udigits_assist.o 

all : $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRC)
		ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re : fclean all