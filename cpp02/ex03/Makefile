CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = BSP
SRC = main.cpp Fixed.cpp bsp.cpp Point.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all