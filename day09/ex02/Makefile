NAME = PmergeMe

CC = c++ -Wall -Wextra -Werror  -std=c++98 

OBJECTS = main.o PmergeMe.o


all: $(NAME)

$(NAME): $(OBJECTS) PmergeMe.hpp
	@$(CC) main.cpp PmergeMe.cpp -o $(NAME)

%.o : %.cpp 
	@$(CC) -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all