CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Bureaucrats
SRC = main.cpp Bureaucrat.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = Bureaucrat.hpp
all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all%  