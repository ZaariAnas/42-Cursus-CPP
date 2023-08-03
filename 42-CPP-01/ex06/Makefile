# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 06:57:18 by azari             #+#    #+#              #
#    Updated: 2023/08/03 13:58:46 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

YELLOW 		= 	\033[1;33m
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98
NAME 		= 	harlFilter
CFILES		= 	main.cpp	\
				Harl.cpp	\

OFILES		= 	$(CFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	@echo "$(YELLOW) -- Harl filter --"
	
%.o:%.cpp Harl.hpp
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