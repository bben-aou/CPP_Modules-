# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/02 08:53:00 by bben-aou          #+#    #+#              #
#    Updated: 2023/01/02 08:53:14 by bben-aou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \

HDRS = Array.hpp \

	  
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