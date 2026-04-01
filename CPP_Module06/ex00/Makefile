# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/28 15:38:43 by daniel-cast       #+#    #+#              #
#    Updated: 2026/03/30 17:55:50 by dacastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScalarConverter
SRC = main.cpp ScalarConverter.cpp
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -g
RM = rm -f
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

	@echo "─▒▒▒▒▒▒▒───▄████▄		"
	@echo "─▒─▄▒─▄▒──███▄█▀			"
	@echo "─▒▒▒▒▒▒▒─▐████──█─█		"
	@echo "─▒▒▒▒▒▒▒──█████▄			"
	@echo "─▒─▒─▒─▒───▀████▀		"

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ) > /dev/null 2>&1

fclean:
	@$(RM) $(OBJ) $(NAME) > /dev/null 2>&1

re: fclean all

.PHONY: all clean fclean re
