#

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Poly
SRC = Animal.cpp  Cat.cpp  Dog.cpp  main.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all