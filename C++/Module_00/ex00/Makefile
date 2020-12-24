# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 16:21:44 by mamoussa          #+#    #+#              #
#    Updated: 2020/12/14 16:28:05 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SCS = megaphone.cpp

all: $(NAME) 

$(NAME):
	clang++ -Wall -Wextra -Werror $(SCS) -o $(NAME)
clean:
	rm $(NAME)
fclean:	clean

re: fclean all