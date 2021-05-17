NAME= phonebook

OBJ_PATH= objects


SRC_NAME= main.cpp\
			Contact.class.cpp

OBJ_NAME= $(SRC_NAME:.cpp=.o)
OBJ= $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

FLAGS= -Wall -Wextra -Werror

COMP= clang++

all: $(NAME) 

$(NAME) : $(OBJ)
	@$(COMP) $(OBJ) -o $@
	@echo "Compilation of $(NAME):  \033[1;32mOK\033[m"

$(OBJ_PATH)/%.o:  %.cpp Contact.class.hpp
	@mkdir -p $(OBJ_PATH) 
	@$(COMP) -g $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ_PATH)
	@echo "\033[1;33m>> all objects files are deleted.\033[0m" 


fclean: clean
	@rm -rf $(NAME)
	@echo "\033[0;31m>> $(NAME) is deleted.\033[0m" 

re : fclean all
