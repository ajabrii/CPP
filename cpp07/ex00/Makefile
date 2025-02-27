CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Whatever
SRC = main.cpp
HEADER = whatever.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all