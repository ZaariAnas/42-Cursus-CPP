# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 11:47:40 by azari             #+#    #+#              #
#    Updated: 2023/08/20 14:24:31 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Abstract
YELLOW 		= \033[1;33m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
FILES		= main AAnimal Cat Dog WrongAnimal WrongCat Brain
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= AAnimal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp


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
