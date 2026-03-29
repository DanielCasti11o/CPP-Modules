# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel-castillo <daniel-castillo@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/20 17:20:58 by daniel-cast       #+#    #+#              #
#    Updated: 2026/02/28 16:25:17 by daniel-cast      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Forms
SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
FILES = Meg_shrubbery garden_shrubbery
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
	@$(RM) $(OBJ) $(NAME) $(FILES) > /dev/null 2>&1

re: fclean all

.PHONY: all clean fclean re
