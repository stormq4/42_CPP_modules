# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sde-quai <sde-quai@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/06/30 13:28:51 by sde-quai      #+#    #+#                  #
#    Updated: 2022/08/18 17:33:53 by sde-quai      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := interface

GCC := clang++

FLAGS := -std=c++98 -Wall -Wextra -Werror -g -pedantic  -fsanitize=address

SRC :=				main.cpp \
					AMateria.cpp \
					MateriaSource.cpp \
					Character.cpp \
					Cure.cpp \
					Ice.cpp


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

.PHONY : clean, fclean, all, re