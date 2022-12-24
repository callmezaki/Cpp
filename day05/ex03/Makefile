NAME = Bureaucrat

CC = c++ -Wall -Wextra -Werror  -std=c++98 

OBJECTS = main.o Bureaucrat.o AForm.o ShrubberyCreationForm.o RobotomyRequestForm.o PresidentialPardonForm.o


COLOR = \033[0;32m

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) main.cpp Bureaucrat.cpp  AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp -o $(NAME)

%.o : %.cpp 
	@$(CC) -c $<
clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all