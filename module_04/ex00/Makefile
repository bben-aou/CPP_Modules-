# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/24 09:06:47 by bben-aou          #+#    #+#              #
#    Updated: 2022/12/24 09:08:35 by bben-aou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CFLAGS = -Wall -Wextra -Werror 

SRC = Animal.cpp \
      Cat.cpp \
	  Dog.cpp \
	  WrongAnimal.cpp \
	  WrongCat.cpp \
	  main.cpp \

HDRS = Animal.hpp \
      Cat.hpp \
	  Dog.hpp \
	  WrongAnimal.hpp \
	  WrongCat.hpp \

	  
OBJ = $(SRC:.cpp=.o)

all : $(NAME) 

$(NAME): $(OBJ) 
	@c++ $(FLAGS) $(OBJ) -o $@
	@echo "\033[0;36m ⚙️  MakeFile ⚙️ : ✅ COMPILED SUCCESSFULY\033[0m"

%.o:%.cpp		$(HDRS)
		@c++ $(CFLAGS) -o $@ -c $<
clean :
	@rm -f $(OBJ)
	@echo "\033[0;36m ⚙️  MakeFile ⚙️ : 🗑️ Objects removed!\033[0m"
fclean : clean
	@rm -f $(NAME)
	@echo "\033[0;36m ⚙️  MakeFile ⚙️ : 🗑️ CLEANED SUCCESSFULY\033[0m"

re: fclean all

.PHONY : all clean fclean re