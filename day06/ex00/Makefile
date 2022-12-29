NAME = Cast

CC = c++ -Wall -Wextra -Werror  -std=c++98 

OBJECTS = main.o literal.o char.o


COLOR = \033[0;32m

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) main.cpp  literal.cpp char.cpp -o $(NAME)

%.o : %.cpp 
	@$(CC) -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all