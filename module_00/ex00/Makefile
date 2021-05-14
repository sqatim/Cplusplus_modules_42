NAME= megaphone

SRC_NAME= megaphone.cpp

FLAGS= -Wall -Wextra -Werror

COMP= clang++

all: $(NAME) 

$(NAME) : $(SRC_NAME)
	@$(COMP) $(SRC_NAME) -o $@
	@echo "Compilation of $(NAME):  \033[1;32mOK\033[m"

fclean:
	@rm -rf $(NAME)
	@echo "\033[0;31m>> $(NAME) is deleted.\033[0m" 

re : fclean all