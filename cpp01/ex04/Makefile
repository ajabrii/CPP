CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Replace
SRC =  Replace.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all