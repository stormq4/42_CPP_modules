# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ MAKEFILE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

NAME := phonebook

GCC := clang++

FLAGS := -std=c++98 -Wall -Wextra -Werror -g

SRC :=				Contact.cpp \
					Phonebook.cpp

INC :=				Contact.hpp

OBJ_DIR	:=			obj
OBJ :=				$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

ifndef verbose
VERB := @
else
VERB := 
endif

## Colors
GREEN := 				"\033[1;32m"
CYAN := 				"\033[1;36m"
RED := 					"\033[1;31m"
PURPLE := 				"\033[1;35m"

all : $(NAME)

verbose : fclean
	$(VERB) $(MAKE) verbose=1

echo :
	@echo object $(OBJ)

$(OBJ_DIR)/%.o : %.cpp
	$(VERB) mkdir -p $(dir $@)
	$(VERB) $(GCC) $(FLAGS) -c $< -o $@
	$(VERB) echo $(CYAN)"Object files [OK]"

$(NAME) : $(OBJ)
	$(VERB) $(GCC) $(FLAGS) $^ -o $@
	$(VERB) echo $(GREEN)"$(NAME) Compiled [OK]"

clean : 
	$(VERB) rm -rf $(OBJ_DIR)
	$(VERB) echo $(RED)"Object Files Removied [OK]"

fclean : clean
	$(VERB) rm -rf $(NAME)
	$(VERB) echo $(RED)"$(NAME) Removed [OK]"

re : fclean all

.PHONY : clean, fclean, all, re, verbose