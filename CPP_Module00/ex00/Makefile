# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/14 18:01:45 by daniel-cast       #+#    #+#              #
#    Updated: 2025/07/17 17:17:07 by daniel-cast      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
SRC = megaphone.cpp
CPPFLAGS = -Wall -Werror -Wall -std=c++98
RM = rm -f
OBJ = $(SRC: .cpp=.o)

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

re: all fclean

.PHONY: all clean fclean re


