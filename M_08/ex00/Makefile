# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sde-quai <sde-quai@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/08/24 10:42:41 by sde-quai      #+#    #+#                  #
#    Updated: 2022/08/29 11:48:04 by sde-quai      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME :=				Vector

ifdef sanitize
FLAGS := 			-std=c++98 -Wall -Wextra -g -fsanitize=address
else
FLAGS :=			-std=c++98 -Wall -Wextra -Werror -g -pedantic
endif


GCC :=				clang++


SRC := 				main.cpp

INC :=				easyfind.hpp

OBJ_DIR := 			obj
OBJ :=				$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all: $(NAME)

fclean : clean
	rm -rf $(NAME)


sanitize: fclean
	$(MAKE)	sanitize=1

$(OBJ_DIR)/%.o : %.cpp $(INC)
	@mkdir -p $(dir $@)
	$(GCC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(GCC) $(FLAGS) $^ -o $@

clean : 
	rm -rf $(OBJ_DIR)



re : fclean all

.PHONY : clean, fclean, all, re