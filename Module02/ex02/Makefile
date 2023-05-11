# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 12:38:03 by sojung            #+#    #+#              #
#    Updated: 2022/07/28 10:53:32 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRC = main.cpp Fixed.cpp

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
