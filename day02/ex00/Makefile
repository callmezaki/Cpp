NAME = Fixed0

CC = c++ -Wall -Wextra -Werror  -std=c++98

OBJECTS = main.o Fixed.o

COLOR = \033[0;32m

all: $(NAME)
	@echo "$(COLOR)███████╗██╗██╗  ██╗███████╗██████╗ \n\
██╔════╝██║╚██╗██╔╝██╔════╝██╔══██╗\n\
█████╗  ██║ ╚███╔╝ █████╗  ██║  ██║\n\
██╔══╝  ██║ ██╔██╗ ██╔══╝  ██║  ██║\n\
██║     ██║██╔╝ ██╗███████╗██████╔╝\n\
╚═╝     ╚═╝╚═╝  ╚═╝╚══════╝╚═════╝ "\

$(NAME): $(OBJECTS)
	@$(CC)  main.cpp Fixed.cpp -o $(NAME)

%.o : %.cpp 
	@$(CC) -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all