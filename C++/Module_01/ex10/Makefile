# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 16:21:44 by mamoussa          #+#    #+#              #
#    Updated: 2021/01/13 10:26:46 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cato9tails

SCS = main.cpp
FLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME):
	clang++ $(FLAGS) $(SCS) -o $(NAME)
clean:
	rm $(NAME)
fclean:	clean

re: fclean all			