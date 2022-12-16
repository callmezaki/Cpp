NAME = ClapTrap

CC = c++ -Wall -Wextra -Werror  -std=c++98

OBJECTS = main.o ClapTrap.o


COLOR = \033[0;32m

all: $(NAME)
# 	@echo "$(COLOR)██╗  ██╗ █████╗ ██████╗ ██╗     ███████╗██╗██╗  ████████╗███████╗██████╗ \n\
# ██║  ██║██╔══██╗██╔══██╗██║     ██╔════╝██║██║  ╚══██╔══╝██╔════╝██╔══██╗\n\
# ███████║███████║██████╔╝██║     █████╗  ██║██║     ██║   █████╗  ██████╔╝\n\
# ██╔══██║██╔══██║██╔══██╗██║     ██╔══╝  ██║██║     ██║   ██╔══╝  ██╔══██╗\n\
# ██║  ██║██║  ██║██║  ██║███████╗██║     ██║███████╗██║   ███████╗██║  ██║\n\
# ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝╚═╝     ╚═╝╚══════╝╚═╝   ╚══════╝╚═╝  ╚═╝\n"

$(NAME): $(OBJECTS)
	@$(CC)  main.cpp ClapTrap.cpp  -I ClapTrap.hpp  -o $(NAME)

%.o : %.cpp 
	@$(CC) -Wall -Wextra -Werror -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all