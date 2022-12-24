/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:02:04 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/24 15:44:12 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Constructors
AForm::AForm() : name() , gtoSign(0) , gtoExecute(0)
{
	Signed = false;
	std::cout << "\e[0;33mDefault Constructor called of AForm\e[0m" << std::endl;
}

AForm::AForm(const AForm &copy) : name(copy.name) , gtoSign(copy.gtoSign) , gtoExecute(copy.gtoExecute)
{
	*this = copy;
	std::cout << "\e[0;33mInfo Constructor called of AForm\e[0m" << std::endl;
}

AForm::AForm(const std::string Name,const int GtoSign, const int GtoExecute) : name(Name) , gtoSign(GtoSign), gtoExecute(GtoExecute)
{
	Signed = false;
	if (gtoExecute < 1 || gtoSign < 1)
		throw GradeTooHighException();
	if (gtoExecute > 150 || gtoSign > 150)
		throw GradeTooLowException();
	std::cout << "\e[0;33mInfo Constructor called of AForm\e[0m" << std::endl;
}


// Destructor
AForm::~AForm()
{
	std::cout << "\e[0;31mDestructor called of AForm\e[0m" << std::endl;
}


// Operators
AForm & AForm::operator=(const AForm &assign)
{
	Signed = assign.Signed;
	return *this;
}

std::string  AForm::getName(void) const
{
	return name;
}
int AForm::getGtoSign(void) const
{
	return gtoSign;
}
int AForm::getGtoExecute(void) const
{
	return gtoExecute;
}
bool  AForm::getSigned(void) const
{
	return Signed;
}

std::ostream& operator<<(std::ostream& os, const AForm& b)
{
	os << b.getName() << " Form is ";
	if (!b.getSigned())
		os << "not ";
	os << "Signed, Grade to sign is " << b.getGtoSign() << ", Grade to Execute " << b.getGtoExecute();
	return os;
}


void AForm::beSigned(const Bureaucrat &Bu)
{
	Bu.signForm(*this);
	if (gtoSign < Bu.getGrade())
	{
		throw GradeTooLowException();
	}
	Signed = true;
}