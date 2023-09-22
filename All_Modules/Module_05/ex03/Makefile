# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bben-aou <bben-aou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/31 09:56:20 by bben-aou          #+#    #+#              #
#    Updated: 2022/12/31 09:56:43 by bben-aou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Bureaucrat.cpp \
      AForm.cpp \
	  Intern.cpp \
	  ShrubberyCreationForm.cpp \
	  RobotomyRequestForm.cpp \
	  PresidentialPardonForm.cpp \
	  main.cpp \

HDRS = Bureaucrat.hpp \
      AForm.hpp \
	  Intern.hpp \
	  ShrubberyCreationForm.hpp \
	  RobotomyRequestForm.hpp \
	  PresidentialPardonForm.hpp \
	  main.hpp \

	  
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