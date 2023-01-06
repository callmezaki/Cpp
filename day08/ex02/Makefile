NAME = MutantStack

CC = c++ -Wall -Wextra -Werror  -std=c++98 

OBJECTS = main.o 


COLOR = \033[0;32m

all: $(NAME)

$(NAME): $(OBJECTS) MutantStack.hpp
	@$(CC) main.cpp -o $(NAME)

%.o : %.cpp 
	@$(CC) -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all