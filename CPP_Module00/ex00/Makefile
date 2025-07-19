# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/14 18:01:45 by daniel-cast       #+#    #+#              #
#    Updated: 2025/07/19 13:58:19 by dacastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
SRC = megaphone.cpp
CPPFLAGS = -Wall -Werror -Wall -std=c++98
RM = rm -f
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

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

re: fclean all

.PHONY: all clean fclean re


