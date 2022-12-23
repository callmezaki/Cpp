/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:06:19 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/22 13:35:02 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequest", 72,45)
{
	this->target = target;
	std::cout << "\e[0;33mString Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	this->target = target;
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}

// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	(void) assign;
	return *this;
}

void RobotomyRequestForm::beSigned(const Bureaucrat &Bu) const
{
	if (getGtoSign() < Bu.getGrade())
	{
		throw GradeTooLowException();
	}
	std::cout << "Piip" << std::endl;
}