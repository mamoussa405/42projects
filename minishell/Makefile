# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbani <mbani@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/11 17:51:39 by mbani             #+#    #+#              #
#    Updated: 2020/11/11 14:17:58 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SRC = *.c

all : $(NAME)

$(NAME):
	make -C ./libft
	gcc -Wall -Wextra -Werror $(SRC) libft/libft.a -g -o minishell
clean:
	rm -rf minishell
fclean:
	rm -rf minishell
re: fclean all
