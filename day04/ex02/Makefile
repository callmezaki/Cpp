NAME = Animal

CC = c++ -Wall -Wextra -Werror  -std=c++98 

OBJECTS = main.o Animal.o Dog.o Cat.o Brain.o


COLOR = \033[0;32m

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp  -o $(NAME)

%.o : %.cpp 
	@$(CC) -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all