CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = PmergeMe
SRC =   main.cpp PmergeMe.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = PmergeMe.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all