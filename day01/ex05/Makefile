NAME = Harl

CC = g++

OBJECTS = main.o Harl.o

COLOR = \033[0;32m

all: $(NAME)
	@echo "$(COLOR)██╗  ██╗ █████╗ ██████╗ ██╗\n\
██║  ██║██╔══██╗██╔══██╗██║     \n\
███████║███████║██████╔╝██║     \n\
██╔══██║██╔══██║██╔══██╗██║     \n\
██║  ██║██║  ██║██║  ██║███████╗\n\
╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝\n"

$(NAME): $(OBJECTS)
	@$(CC) -Wall -Wextra -Werror  -std=c++98 main.cpp Harl.cpp -I Harl.hpp  -o $(NAME)

%.o : %.cpp 
	@$(CC) -Wall -Wextra -Werror -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all