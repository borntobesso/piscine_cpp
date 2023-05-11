# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 12:58:41 by sojung            #+#    #+#              #
#    Updated: 2022/08/15 12:29:04 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRC = main.cpp Bureaucrat.cpp Form.cpp

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
