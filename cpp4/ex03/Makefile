# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 18:23:43 by jpelaez-          #+#    #+#              #
#    Updated: 2023/10/20 17:21:03 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMateria

SRC = main.cpp Amateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp  

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