/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:32:49 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/19 13:10:58 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
}


// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}


// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	type = assign.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Cat Sound" << std::endl;
}
