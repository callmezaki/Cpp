/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:02:48 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/14 04:45:45 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :  HitPoints(100), EnergyPoints(50),AttackDamage(20)
{

}
ScavTrap::ScavTrap(std::string n) : HitPoints(100), EnergyPoints(50),AttackDamage(20)
{
	name = n;
}
ScavTrap::~ScavTrap() 
{
	
}
void ScavTrap::attack(const std::string& target)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << "ScavTrap " << name << " Attacks " << target << " causing "<< AttackDamage <<" points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
		std::cout << "ScavTrap " << name << " Has no HitPoints or EnergyPoints" << std::endl;
		
}
void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << name << " has taken a dommage of " << amount << std::endl;
	HitPoints -= amount;
}
void ScavTrap::beRepaired(unsigned int amount)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << "ScavTrap " << name << " has repaired " << amount << std::endl;
		HitPoints += amount;
		EnergyPoints--;
	}
	else
		std::cout << "ScavTrap " << name << " Has no HitPoints or EnergyPoints" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}