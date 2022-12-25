/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:06:19 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/25 20:29:32 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequest", 72,45)
{
	this->target = target;
	std::cout << "\e[0;33mString Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
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
	this->target = assign.target;
	return *this;
}

void  RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(getSigned() && executor.getGrade() <= getGtoExecute())
	{
		std::cout << "Dzzzzz ,";
		srand(time(0));
		if (rand() % 2)
		{
			std::cout << target << " has been robotomized successfully" << std::endl;
		}
		else
		{
			std::cout << "Robotomy failed" << std::endl;
		}
	}
}