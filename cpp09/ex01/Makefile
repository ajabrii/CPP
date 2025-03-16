CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = RPN
SRC =   main.cpp RPN.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = RPN.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all