# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 09:22:29 by azari             #+#    #+#              #
#    Updated: 2023/07/27 10:12:35 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

YELLOW 		= 	\033[1;33m
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98
NAME 		= 	Zombies
CFILES		= 	Zombie.cpp	\
				main.cpp	\
				zombieHorde.cpp	\
				
OFILES		= 	$(CFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	@echo "$(YELLOW) -- Zombies --"
	
%.o:%.cpp Zombie.hpp
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