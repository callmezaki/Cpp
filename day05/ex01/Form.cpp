/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:02:04 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/20 17:44:48 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructors
Form::Form() : name() , gtoSign(0) , gtoExecute(0) 
{
	Signed = false;
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const Form &copy) : name(copy.name) , gtoSign(copy.gtoSign) , gtoExecute(copy.gtoExecute)
{
	*this = copy;
	std::cout << "\e[0;33mInfo Constructor called of Form\e[0m" << std::endl;
}

Form::Form(const std::string Name,const int GtoSign, const int GtoExecute) : name(Name) , gtoSign(GtoSign), gtoExecute(GtoExecute)
{
	Signed = false;
	if (gtoExecute < 1 || gtoSign < 1)
		throw GradeTooHighException();
	if (gtoExecute > 150 || gtoSign > 150)
		throw GradeTooLowException();
	std::cout << "\e[0;33mInfo Constructor called of Form\e[0m" << std::endl;
}


// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}


// Operators
Form & Form::operator=(const Form &assign)
{
	Signed = assign.Signed;
	return *this;
}

std::string  Form::getName(void) const
{
	return name;
}
int Form::getGtoSign(void) const
{
	return gtoSign;
}
int Form::getGtoExecute(void) const
{
	return gtoExecute;
}
bool  Form::getSigned(void) const
{
	return Signed;
}

std::ostream& operator<<(std::ostream& os, const Form& b)
{
	os << b.getName() << " Form ";
	if (!b.getSigned())
		os << "not ";
	os << "Signed,Grade to sign is " << b.getGtoSign() << ", Grade to Execute " << b.getGtoExecute();
	return os;
}


void Form::beSigned(const Bureaucrat &Bu)
{
	Bu.signForm(*this);
	if (gtoSign < Bu.getGrade())
	{
		throw GradeTooLowException();
	}
	Signed = true;
}