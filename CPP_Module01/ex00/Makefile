# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/24 18:00:19 by daniel-cast       #+#    #+#              #
#    Updated: 2025/07/24 18:07:03 by daniel-cast      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
RM = rm -f
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

	@echo "─▒▒▒▒▒▒▒───▄████▄		"
	@echo "─▒─▄▒─▄▒──███▄█▀			"
	@echo "─▒▒▒▒▒▒▒─▐████──█─█		"
	@echo "─▒▒▒▒▒▒▒──█████▄			"
	@echo "─▒─▒─▒─▒───▀████▀		"

$(NAME) : $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME) > /dev/null 2>&1

clean:
	@$(RM) $(OBJ) > /dev/null 2>&1

fclean:
	@$(RM) $(OBJ) $(NAME) > /dev/null 2>&1

re: fclean all

.PHONY: all clean fclean re
