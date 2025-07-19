# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 15:59:21 by daniel-cast       #+#    #+#              #
#    Updated: 2025/07/19 13:57:20 by dacastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
SRC = Phonebook.cpp Contact.cpp main.cpp
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -g3
RM = rm -f
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

	@echo "──▒▒▒▒▒▒───▄████▄		"
	@echo "─▒─▄▒─▄▒──███▄█▀			"
	@echo "─▒▒▒▒▒▒▒─▐████──█─█		"
	@echo "─▒▒▒▒▒▒▒──█████▄			"
	@echo "─▒─▒─▒─▒───▀████▀		"


$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
