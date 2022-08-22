# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sde-quai <sde-quai@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/08/01 11:46:12 by sde-quai      #+#    #+#                  #
#    Updated: 2022/08/22 14:05:54 by sde-quai      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME :=				Scalar

ifdef sanitize
FLAGS := 			-std=c++98 -Wall -Wextra -g -fsanitize=address
else
FLAGS :=			-std=c++98 -Wall -Wextra -Werror -g -pedantic
endif


GCC :=				clang++


SRC := 				main.cpp \
					Scalar.cpp

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