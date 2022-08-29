/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:03:22 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/29 22:38:51 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA()
{
	
}

HumanA::~HumanA()
{
	
}

HumanA::HumanA(std::string name, Weapon& weapon) 
{
	this->name = name;
	this->weapon = &weapon;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}