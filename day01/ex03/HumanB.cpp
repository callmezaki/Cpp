/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:03:29 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/26 20:09:15 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::~HumanB()
{

}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	if(Weapon)
		std::cout << name << " attacks with their " << Weapon->getType() << std::endl;
}

void HumanB::setWeapon(class Weapon& Weapon)
{
	this->Weapon = &Weapon;
}