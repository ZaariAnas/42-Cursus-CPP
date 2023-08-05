# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 13:25:44 by azari             #+#    #+#              #
#    Updated: 2023/08/05 06:45:38 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

YELLOW 		= 	\033[1;33m
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98
NAME 		= 	violence
CFILES		= 	main.cpp	\
				HumanA.cpp	\
				HumanB.cpp	\
				Weapon.cpp	\

OFILES		= 	$(CFILES:.cpp=.o)
HEADERS		= 	HumanA.hpp HumanB.hpp Weapon.hpp

all : $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	@echo "$(YELLOW) -- Unnecessary violence --"
	
%.o:%.cpp $(HEADERS)
	@echo "$(YELLOW) ⏳ Setup ongoing"
	@$(CC) $(CFLAGS) -c $< -o $@

	
clean	:
	@rm -rf $(OFILES)
	@echo  "$(YELLOW) ❌ OBJS deleted."

fclean	: clean
	@rm -rf $(NAME)
	@echo  "$(YELLOW) ❌ ALL deleted."

re		: fclean all

cl 		: all clean

.PHONY: clean fclean re all cl 