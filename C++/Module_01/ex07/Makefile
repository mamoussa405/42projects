# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 16:21:44 by mamoussa          #+#    #+#              #
#    Updated: 2021/01/12 11:18:05 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SCS = replace.cpp
FLAGS = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME):
	clang++ $(FLAGS) $(SCS) -o $(NAME)
clean:
	rm $(NAME)
fclean:	clean

re: fclean all			