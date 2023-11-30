# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 15:56:00 by jpelaez-          #+#    #+#              #
#    Updated: 2023/11/30 18:08:30 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Bureaucrat

SRC = main.cpp Bureaucrat.cpp

OBJECT = $(SRC:.cpp=.o)
HEADER = Bureaucrat.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
INCLUDES = -Iincludes -I

all: $(NAME)

$(NAME): $(OBJECT) $(HEADER)
		$(CC) $(INCLUDES) $(FLAGS) $(OBJECT) -o $(NAME)

clean:
	rm -f $(OBJECT) 

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean