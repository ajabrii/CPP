CC = c++
NAME = megaphone
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)
fclean: clean
		@rm -rf $(NAME)
re: fclean all