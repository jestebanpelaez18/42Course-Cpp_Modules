# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpelaez- <jpelaez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 16:41:07 by jpelaez-          #+#    #+#              #
#    Updated: 2023/09/21 22:24:34 by jpelaez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyAwesomePhoneBook

SRC = main.cpp PhoneBook.cpp 

OBJECT = $(SRC:.cpp=.o)
HEADER = Contact.hpp PhoneBook.hpp 

FLAGS = -Wall -Wextra -Werror 
CC = clang++
IFLAGS = -I $(HEADER)


all: $(NAME)

$(NAME): 
		$(CC) $(SRC) $(FLAGS) -o $(NAME)

# %.o: %.cpp
# 	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECT) 

fclean: clean
	   rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean