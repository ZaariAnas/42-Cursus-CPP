# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 13:44:09 by azari             #+#    #+#              #
#    Updated: 2023/07/26 13:06:52 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PURPLE 		= 	\033[0;35m
CC			= 	c++
CFLAGS		= 	-Wall -Wextra -Werror 
NAME 		= 	megaphone
CFILES		= 	megaphone.cpp
		
OFILES		= 	$(CFILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	@$(CC) $(CFLAGS) $(OFILES) -o $(NAME)
	@echo "$(PURPLE) ✅ megaphone "

%.o:%.cpp	
	@echo "$(PURPLE) ⏳ Setup ongoing ⏳ ..."
	@$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -rf $(OFILES)
	@echo  "$(PURPLE) ❌ OBJS deleted."

fclean	: clean
	@rm -rf $(NAME)
	@echo  "$(PURPLE) ❌ ALL deleted."

re		: fclean all

cl 		: all clean

.PHONY: clean fclean re all cl