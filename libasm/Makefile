# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 17:51:56 by mamoussa          #+#    #+#              #
#    Updated: 2020/02/19 18:14:14 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC = ft_read.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlen.o ft_write.o

all:$(NAME)

libasm.a : compilation
	ar rc $(NAME) $(SRC)
compilation:
	nasm -f macho64 ft_read.s
	nasm -f macho64 ft_strcmp.s
	nasm -f macho64 ft_strcpy.s
	nasm -f macho64 ft_strdup.s
	nasm -f macho64 ft_strlen.s
	nasm -f macho64 ft_write.s

clean:
	rm -rf $(SRC)
fclean: clean
	rm -rf $(NAME)
re: fclean all