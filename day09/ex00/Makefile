NAME = btc

CC = c++ -Wall -Wextra -Werror  -std=c++98 

OBJECTS = main.o BitcoinExchange.o


all: $(NAME)

$(NAME): $(OBJECTS) BitcoinExchange.hpp
	@$(CC) main.cpp BitcoinExchange.cpp -o $(NAME)

%.o : %.cpp 
	@$(CC) -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all