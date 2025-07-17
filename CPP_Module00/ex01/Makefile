# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 15:59:21 by daniel-cast       #+#    #+#              #
#    Updated: 2025/07/17 21:30:39 by daniel-cast      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = phonebook.cpp Contact.cpp main.cpp
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f
OBJ = $(SRC: .cpp=.o)

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
	$(RM) $(NAME) $(OBJ)

re: all fclean

.PHONY: all clean fclean re
