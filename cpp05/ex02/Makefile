CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME =  YouNeedForm
SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = Bureaucrat.hpp AForm.hpp
all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all  