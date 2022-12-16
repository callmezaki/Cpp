/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 00:58:53 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/16 10:32:13 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	type = "Dog";
	Brain = new class Brain;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
	*this = copy;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	if (Brain)
		delete Brain;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	std::cout << "\e[0;33mCopy Assignment oprator called of Dog\e[0m" << std::endl;
	if (Brain)
		delete  Brain;
	Brain = new class Brain;
	*Brain = *assign.Brain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog Sound" << std::endl;
}
