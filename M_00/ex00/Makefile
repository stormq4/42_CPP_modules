# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ MAKEFILE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

NAME := megaphone

GCC := clang++

FLAGS := -std=c++98 -Wall -Wextra -Werror -g

SRC :=				megaphone.cpp

OBJ_DIR	:=			obj
OBJ :=				$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all : $(NAME)

$(OBJ_DIR)/%.o : %.cpp
	mkdir -p $(dir $@)
	$(GCC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(GCC) $(FLAGS) $^ -o $@

clean : 
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean, fclean, all, re, verbose