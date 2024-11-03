CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phoneBook
SRC = Main.cpp Setters_Getters
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all