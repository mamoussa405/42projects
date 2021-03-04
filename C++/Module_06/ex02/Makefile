# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 12:39:47 by mamoussa          #+#    #+#              #
#    Updated: 2021/03/04 11:35:18 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

COMPILER = clang++

FLAGS = -Wall -Wextra -Werror

FILES = generate.cpp identify_from_pointer.cpp identify_from_reference.cpp main.cpp Base.cpp

all: $(NAME)

$(NAME):
	$(COMPILER) $(FLAGS)  $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all