# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sde-quai <sde-quai@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/30 13:28:51 by sde-quai      #+#    #+#                  #
#    Updated: 2022/07/11 15:00:33 by sde-quai      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := weapon

GCC := clang++

FLAGS := -std=c++98 -Wall -Wextra -Werror -g -pedantic

SRC :=				main.cpp \
					Weapon.cpp \
					HumanA.cpp \
					HumanB.cpp

INC :=				Weapon.hpp HumanA.hpp HumanB.hpp

OBJ_DIR	:=			obj
OBJ :=				$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))


all : $(NAME)

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

.PHONY : clean, fclean, all, re, verbose