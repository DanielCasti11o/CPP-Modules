# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/19 17:30:38 by daniel-cast       #+#    #+#              #
#    Updated: 2025/09/19 17:58:13 by daniel-cast      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMateria
SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g
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
