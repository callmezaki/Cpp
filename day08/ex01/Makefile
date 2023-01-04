NAME = span

CC = c++ -Wall -Wextra -Werror  -std=c++98 

OBJECTS = main.o span.o


COLOR = \033[0;32m

all: $(NAME)

$(NAME): $(OBJECTS) span.hpp
	@$(CC) main.cpp span.cpp -o $(NAME)

%.o : %.cpp 
	@$(CC) -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all