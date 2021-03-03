# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 12:39:47 by mamoussa          #+#    #+#              #
#    Updated: 2021/03/03 16:29:15 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

COMPILER = clang++

FLAGS = -Wall -Wextra -Werror

FILES = main.cpp type_detection.cpp Types.cpp 

all: $(NAME)

$(NAME):
	$(COMPILER) $(FLAGS)  $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all