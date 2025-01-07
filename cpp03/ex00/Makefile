CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ClapTrap
SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = ClapTrap.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all