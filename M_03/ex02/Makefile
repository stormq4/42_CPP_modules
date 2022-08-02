# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sde-quai <sde-quai@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/08/01 11:46:12 by sde-quai      #+#    #+#                  #
#    Updated: 2022/08/02 11:58:53 by sde-quai      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME :=				FragTrap

GCC :=				clang++

FLAGS :=			-std=c++98 -Wall -Wextra -Werror -g -pedantic

SRC := 				ClapTrap.cpp \
					ScavTrap.cpp \
					FragTrap.cpp \
					main.cpp

OBJ_DIR := 			obj
OBJ :=				$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all: $(NAME)

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(dir $@)
	$(GCC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(GCC) $(FLAGS) $^ -o $@

clean : 
	rm -rf $(OBJ_DIR)


fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean, fclean, all, re