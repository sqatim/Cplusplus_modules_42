NAME= RPN

OBJ_PATH= objects

SRC_NAME= main.cpp ReversePolishNotation.cpp

HDR_NAME= ReversePolishNotation.hpp

OBJ_NAME= $(SRC_NAME:.cpp=.o)
OBJ= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

FLAGS= -Wall -Wextra -Werror

COMP= clang++ -std=c++98

all: $(NAME) 

$(NAME) : $(OBJ)
	@$(COMP) $(OBJ) -o $@
	@echo "Compilation of $(NAME):  \033[1;32mOK\033[m"

$(OBJ_PATH)/%.o:  %.cpp $(HDR_NAME)
	@mkdir -p $(OBJ_PATH) 
	@$(COMP) -g $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ_PATH)
	@echo "\033[1;33m>> all objects files are deleted.\033[0m" 

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;31m>> $(NAME) is deleted.\033[0m" 

re : fclean all
