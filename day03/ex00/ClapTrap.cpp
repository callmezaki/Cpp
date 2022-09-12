/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:19:31 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/13 00:51:42 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : name(NULL), HitPoints(10), EnergyPoints(10),AttackDamage(10)
{

}
ClapTrap::ClapTrap(std::string n) : HitPoints(10), EnergyPoints(10),AttackDamage(10)
{
	name = n;
}
ClapTrap::~ClapTrap() 
{
	
}
void ClapTrap::attack(const std::string& target)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << "ClapTrap " << name << " Attacks " << target << " causing "<< AttackDamage <<" points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << name << " Has no HitPoints or EnergyPoints" << std::endl;
		
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " has taken a dommage of " << amount << std::endl;
	HitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << name << " has repaired " << amount << std::endl;
		HitPoints += amount;
		EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << name << " Has no HitPoints or EnergyPoints" << std::endl;
}