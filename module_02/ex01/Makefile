# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 15:08:00 by virsnp00x         #+#    #+#              #
#    Updated: 2022/12/14 12:23:14 by bben-aou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CFLAGS = -Wall -Wextra -Werror 

SRC = Fixed.cpp \
	  main.cpp \

OBJ = $(SRC:.cpp=.o)

all : $(NAME) 

$(NAME): $(OBJ) 
	@c++ $(FLAGS) $(OBJ) -o $@
	@echo "\033[0;36m ⚙️  MakeFile ⚙️ : ✅ COMPILED SUCCESSFULY\033[0m"

%.o:%.cpp		Fixed.hpp
		@c++ $(CFLAGS) -o $@ -c $<
clean :
	@rm -f $(OBJ)
	@echo "\033[0;36m ⚙️  MakeFile ⚙️ : 🗑️ Objects removed!033[0m"
fclean : clean
	@rm -f $(NAME)
	@echo "\033[0;36m ⚙️  MakeFile ⚙️ : 🗑️ CLEANED SUCCESSFULY\033[0m"

re: fclean all

.PHONY : all clean fclean re