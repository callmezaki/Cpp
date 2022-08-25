/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:00:17 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/24 20:24:58 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getName()
{
	return(name);
}

void 	Zombie::setName(std::string n)
{
	name = n;
}

Zombie::Zombie()
{
	
}

Zombie::~Zombie(void)
{
	std::cout << name << " is destructed\n";
}