NAME		= Serialize
YELLOW 		= \033[1;33m
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98 #-fno-rtti
OBJDIR 		= .obj
FILES		= main Base
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Base.hpp A.hpp B.hpp C.hpp


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)
	@echo "$(YELLOW) -- Serialisation --"

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