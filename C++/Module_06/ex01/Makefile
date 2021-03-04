# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 12:39:47 by mamoussa          #+#    #+#              #
#    Updated: 2021/03/04 10:23:52 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize

COMPILER = clang++

FLAGS = -Wall -Wextra -Werror

FILES = deserialize.cpp main.cpp serialize.cpp 

all: $(NAME)

$(NAME):
	$(COMPILER) $(FLAGS)  $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all