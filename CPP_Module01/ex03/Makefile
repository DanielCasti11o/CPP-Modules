# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/25 15:21:22 by daniel-cast       #+#    #+#              #
#    Updated: 2025/07/29 14:51:42 by daniel-cast      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HumanWeapon
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp HumanB.cpp HumanA.cpp Weapon.cpp
RM = rm -f
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

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
