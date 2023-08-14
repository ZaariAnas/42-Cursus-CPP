# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 14:19:52 by azari             #+#    #+#              #
#    Updated: 2023/08/09 15:37:31 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

YELLOW 		= 	\033[1;33m
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror -std=c++98
NAME 		= 	a.out
CFILES		= 	main.cpp	\
				Fixed.cpp	\

OFILES		= 	$(CFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	@echo "$(YELLOW) -- Now we’re talking --"
	
%.o:%.cpp Fixed.hpp
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