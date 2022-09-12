/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:03:22 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/10 21:33:02 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::~HumanA()
{
	
}

HumanA::HumanA(std::string name, Weapon& _weapon) : weapon(_weapon)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}