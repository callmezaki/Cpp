#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

// ShrubberyCreationForm::ShrubberyCreationForm(std)
// {
// 	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
// }

// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
// {
// 	(void) copy;
// 	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
// }


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	(void) assign;
	return *this;
}

void ShrubberyCreationForm::beSigned(const Bureaucrat &Bu)
{
	// Bu.signForm(*this);
	if (145 < Bu.getGrade())
	{
		throw GradeTooLowException();
	}
	
}