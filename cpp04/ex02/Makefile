#

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Brain
SRC = Animal.cpp  Cat.cpp  Dog.cpp  main.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp
all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all