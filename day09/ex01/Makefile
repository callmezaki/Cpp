NAME = RPN

CC = c++ -Wall -Wextra -Werror  -std=c++98 

OBJECTS = main.o RPN.o 


all: $(NAME)

$(NAME): $(OBJECTS) RPN.hpp
	@$(CC) main.cpp RPN.cpp -o $(NAME)

%.o : %.cpp 
	@$(CC) -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all