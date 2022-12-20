/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:08:54 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/20 17:46:47 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


// Constructors
Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}


Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name)
{
	if (Grade < 1)
		throw GradeTooHighException();
	if (Grade > 150)
		throw GradeTooLowException();
	grade = Grade;
	std::cout << "\e[0;33mName && Grade Constructor called of Bureaucrat\e[0m" << std::endl;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	(void) assign;
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return name;
}
int Bureaucrat::getGrade(void) const
{
	return grade;
}


void Bureaucrat::incrementGrade(void)
{
	if (grade - 1 < 1)
	{
		throw GradeTooLowException();
	}
	grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (grade + 1 > 150)
	{
		throw GradeTooLowException();
	}
	grade++;
}

void Bureaucrat::signForm(const class Form &F) const
{
	if (F.getGtoSign() >= grade)
		std::cout << name << " Signed " << F.getName() << std::endl;
	else if(F.getSigned())
		std::cout << name << " couldn’t sign " << F.getName() << " beacuase it's already signed"<< std::endl;
	else
		std::cout << name << " couldn’t sign " << F.getName() << " beacuase of grade"<< std::endl;
		
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	
	return os;
}