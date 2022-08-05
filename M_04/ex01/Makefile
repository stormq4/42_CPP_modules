# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sde-quai <sde-quai@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/08/01 11:46:12 by sde-quai      #+#    #+#                  #
#    Updated: 2022/08/05 14:24:28 by sde-quai      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME :=				Brain

ifdef sanitize
FLAGS := 			-std=c++98 -Wall -Wextra -g -fsanitize=address
else
FLAGS :=			-std=c++98 -Wall -Wextra -Werror -g -pedantic
endif


GCC :=				clang++


SRC := 				Animal.cpp \
					Cat.cpp \
					Dog.cpp \
					WrongAnimal.cpp \
					WrongCat.cpp \
					Brain.cpp \
					main.cpp

OBJ_DIR := 			obj
OBJ :=				$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all: $(NAME)

fclean : clean
	rm -rf $(NAME)


sanitize: fclean
	$(MAKE)	sanitize=1

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(dir $@)
	$(GCC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(GCC) $(FLAGS) $^ -o $@

clean : 
	rm -rf $(OBJ_DIR)



re : fclean all

.PHONY : clean, fclean, all, re