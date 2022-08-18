/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:00:17 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/18 17:34:35 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getName()
{
	return(this->name);
}

void 	Zombie::setName(std::string n)
{
	this->name = n;
}

Zombie::Zombie()
{
	
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is destructed\n";
}