NAME = Bankers

CC = g++

OBJECTS = Account.o tests.o

COLOR = \033[0;32m

all: $(NAME)
	@echo "$(COLOR)██████╗  █████╗ ███╗   ██╗██╗  ██╗███████╗██████╗ ███████╗\n\
██╔══██╗██╔══██╗████╗  ██║██║ ██╔╝██╔════╝██╔══██╗██╔════╝\n\
██████╔╝███████║██╔██╗ ██║█████╔╝ █████╗  ██████╔╝███████╗\n\
██╔══██╗██╔══██║██║╚██╗██║██╔═██╗ ██╔══╝  ██╔══██╗╚════██║\n\
██████╔╝██║  ██║██║ ╚████║██║  ██╗███████╗██║  ██║███████║\n\
╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚══════╝\n"

$(NAME): $(OBJECTS)
	@$(CC) -Wall -Wextra -Werror Account.cpp tests.cpp -o $(NAME)

%.o : %.cpp 
	@$(CC) -Ofast -Wall -Wextra -Werror -I Account.hpp -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all