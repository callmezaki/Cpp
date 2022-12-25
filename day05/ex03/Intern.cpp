/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:30:18 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/25 13:52:14 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

Form *Intern::makeForm(std::string form, std::string target)
{
	std::string forms[3] = {"robotomy request","presidential pardon", "shrubbery creation"};
	int i = 0;
	while(i < 3)
	{
		if(form == forms[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0 :
			std::cout << "Intern creates " << forms[i] << std::endl;
			return new RobotomyRequestForm(target);
		case 1 :
			std::cout << "Intern creates " << forms[i] << std::endl;
			return new PresidentialPardonForm(target);
		case 2 :
			std::cout << "Intern creates " << forms[i] << std::endl;
			return new ShrubberyCreationForm(target);
		case 3 :
			throw formDoesNotExist();
	}
	return NULL;
}