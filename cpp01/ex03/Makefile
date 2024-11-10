CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
NAME = Combat

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re