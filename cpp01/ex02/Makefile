CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = mainRef
SRCS = main.cpp
OBJ = $(SRCS:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean: $(OBJ)
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)
re : fclean all
.PHONY: all clean fclean re