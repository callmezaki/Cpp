NAME = BraiiiiiiinnnzzzZ

CC = c++

OBJECTS = main.o Zombie.o zombieHorde.o

COLOR = \033[0;32m

all: $(NAME)
	@echo "$(COLOR)██████╗ ██████╗  █████╗ ██╗██╗██╗██╗██╗██╗██╗███╗   ██╗███╗   ██╗███╗   ██╗███████╗███████╗███████╗███████╗\n\
██╔══██╗██╔══██╗██╔══██╗██║██║██║██║██║██║██║████╗  ██║████╗  ██║████╗  ██║╚══███╔╝╚══███╔╝╚══███╔╝╚══███╔╝\n\
██████╔╝██████╔╝███████║██║██║██║██║██║██║██║██╔██╗ ██║██╔██╗ ██║██╔██╗ ██║  ███╔╝   ███╔╝   ███╔╝   ███╔╝\n\
██╔══██╗██╔══██╗██╔══██║██║██║██║██║██║██║██║██║╚██╗██║██║╚██╗██║██║╚██╗██║ ███╔╝   ███╔╝   ███╔╝   ███╔╝\n\
██████╔╝██║  ██║██║  ██║██║██║██║██║██║██║██║██║ ╚████║██║ ╚████║██║ ╚████║███████╗███████╗███████╗███████╗\n\
╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚═╝╚═╝╚═╝╚═╝╚═╝╚═╝╚═╝  ╚═══╝╚═╝  ╚═══╝╚═╝  ╚═══╝╚══════╝╚══════╝╚══════╝╚══════╝\n"

$(NAME): $(OBJECTS)
	@$(CC) -Wall -Wextra -Werror  -std=c++98 main.cpp Zombie.cpp zombieHorde.cpp -I Zombie.hpp  -o $(NAME)

%.o : %.cpp 
	@$(CC) -Wall -Wextra -Werror -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all