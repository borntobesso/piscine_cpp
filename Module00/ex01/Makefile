# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 13:58:04 by sojung            #+#    #+#              #
#    Updated: 2022/07/06 16:35:23 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = phonebook.cpp contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -I. -c $^ -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -I. $^ -o $@

clean :
	rm $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
