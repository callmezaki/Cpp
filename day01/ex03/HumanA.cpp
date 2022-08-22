/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:03:22 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/20 22:28:17 by zait-sli         ###   ########.fr       */
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

HumanA::HumanA(std::string name,class Weapon& Weapon)
{
	this->name = name;
	this->Weapon = &Weapon;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << Weapon->getType() << std::endl;
}