# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 13:42:23 by azari             #+#    #+#              #
#    Updated: 2023/08/22 13:44:48 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Abstract
YELLOW 		= \033[1;33m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
FILES		= AMateria Character Cure Ice main MateriaSource
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)
	@echo "$(YELLOW) -- AMateria --"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@
	@echo "$(YELLOW) ⏳ Setup ongoing"

clean:
	@rm -rf $(OBJDIR) $(OBJ)
	@echo  "$(YELLOW) ❌ OBJS deleted."

fclean: clean
	@rm -rf  $(NAME)
	@echo  "$(YELLOW) ❌ ALL deleted."

re: fclean all
.PHONY: all clean fclean re