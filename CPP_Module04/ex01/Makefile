
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/23 18:40:50 by daniel-cast       #+#    #+#              #
#    Updated: 2025/08/26 12:45:51 by daniel-cast      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AnimalBrain
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

	@echo "─▒▒▒▒▒▒▒───▄████▄		"
	@echo "─▒─▄▒─▄▒──███▄█▀			"
	@echo "─▒▒▒▒▒▒▒─▐████──█─█		"
	@echo "─▒▒▒▒▒▒▒──█████▄			"
	@echo "─▒─▒─▒─▒───▀████▀		"

$(NAME) : $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ) > /dev/null 2>&1

fclean:
	@$(RM) $(OBJ) $(NAME) > /dev/null 2>&1

re: fclean all

.PHONY: all clean fclean re
