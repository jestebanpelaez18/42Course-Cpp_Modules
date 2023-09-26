# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 18:09:06 by jpelaez-          #+#    #+#              #
#    Updated: 2023/09/26 18:11:18 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyAwesomePhoneBook

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJECT = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++


all: $(NAME)

$(NAME): 
		$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJECT) 

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean