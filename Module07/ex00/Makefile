# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 23:53:36 by sojung            #+#    #+#              #
#    Updated: 2022/08/18 23:55:25 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = templates

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g3

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
