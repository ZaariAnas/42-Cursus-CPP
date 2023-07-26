# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 15:02:14 by azari             #+#    #+#              #
#    Updated: 2023/07/26 13:06:58 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

YELLOW 		= 	\033[1;33m
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror 
NAME 		= 	rolodex
CFILES		= 	PhoneBook.cpp	\
				Contact.cpp		\
				main.cpp		\
				
OFILES		= 	$(CFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	@echo "$(YELLOW) -- The Rolodex --"
	
%.o:%.cpp PhoneBook.hpp
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