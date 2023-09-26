# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 09:38:48 by azari             #+#    #+#              #
#    Updated: 2023/09/25 10:38:10 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Bureaucrat
YELLOW 		= \033[1;33m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
OBJDIR 		= .obj
FILES		= main ScalarConverter
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= ScalarConverter.hpp


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)
	@echo "$(YELLOW) -- Bureaucrat --"

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