CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = btc
SRC =   main.cpp BitcoinExchange.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = BitcoinExchange.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)
clean: $(OBJ)
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all