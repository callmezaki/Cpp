NAME = Fixed

CC = c++

OBJECTS = main.o Fixed.o

COLOR = \033[0;32m

all: $(NAME)
	@echo "$(COLOR)███████╗██╗██╗  ██╗███████╗██████╗ \n\
██╔════╝██║╚██╗██╔╝██╔════╝██╔══██╗\n\
█████╗  ██║ ╚███╔╝ █████╗  ██║  ██║\n\
██╔══╝  ██║ ██╔██╗ ██╔══╝  ██║  ██║\n\
██║     ██║██╔╝ ██╗███████╗██████╔╝\n\
╚═╝     ╚═╝╚═╝  ╚═╝╚══════╝╚═════╝ "

$(NAME): $(OBJECTS)
	@$(CC) -Wall -Wextra -Werror  -std=c++98 main.cpp Fixed.cpp -I Fixed.hpp  -o $(NAME)

%.o : %.cpp 
	@$(CC) -Wall -Wextra -Werror -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all