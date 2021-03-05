# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 12:39:47 by mamoussa          #+#    #+#              #
#    Updated: 2021/03/05 09:57:34 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

COMPILER = clang++

FLAGS = -Wall -Wextra -Werror

FILES = main.cpp

all: $(NAME)

$(NAME):
	$(COMPILER) $(FLAGS)  $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all