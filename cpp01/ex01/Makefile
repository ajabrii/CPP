CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ZombieHorde
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all