# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 16:21:44 by mamoussa          #+#    #+#              #
#    Updated: 2020/12/24 17:18:11 by mamoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = crappy

SCS = Contact.cpp main.cpp search_contact.cpp

all: $(NAME) 

$(NAME):
	clang++ -Wall -Wextra -Werror $(SCS) -o $(NAME)
clean:
	rm $(NAME)
fclean:	clean

re: fclean all