# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 11:41:19 by sojung            #+#    #+#              #
#    Updated: 2022/08/01 11:41:59 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp

SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp
	$(CC) $(FLAGS) -I. -c $^ -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -I. $^ -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
