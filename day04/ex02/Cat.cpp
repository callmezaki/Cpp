/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:58:44 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/19 12:20:58 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	type = "Cat";
	Brain = new class Brain;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete Brain;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	std::cout << "\e[0;33mCopy Assignment oprator called of Cat\e[0m" << std::endl;
	if (Brain)
		delete  Brain;
	Brain = new class Brain();
	*Brain = *assign.Brain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound" << std::endl;
}
