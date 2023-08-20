# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 16:46:34 by azari             #+#    #+#              #
#    Updated: 2023/08/20 16:46:37 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Abstract
YELLOW 		= \033[1;33m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
SRC			= $(FILES:=.cpp)
FILES		= main AMateria Character MateriaSource Ice Cure
HEADERS		= AMateria.hpp ICharacter.hpp Ice.hpp Cure.hpp Character.hpp \
				MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)
	@echo "$(YELLOW) -- Abstraction --"

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