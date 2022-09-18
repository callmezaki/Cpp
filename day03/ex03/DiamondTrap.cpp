/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:58:43 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/16 03:15:22 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : HitPoints(FragTrap::HitPoints) , EnergyPoints(ScavTrap::EnergyPoints) , AttackDamage(FragTrap::AttackDamage)
{
	
}

DiamondTrap::DiamondTrap(std::string n) : HitPoints(FragTrap::HitPoints) , EnergyPoints(ScavTrap::EnergyPoints) , AttackDamage(FragTrap::AttackDamage)
{
	name = n;
}

DiamondTrap::~DiamondTrap()
{
	
}
void DiamondTrap::attack(const std::string& target)
{
	ClapTrap::attack(target);
	// if (HitPoints && EnergyPoints)
	// {
		std::cout << AttackDamage << std::endl;
	// 	EnergyPoints--;
	// }
	// else
	// 	std::cout << "DiamondTrap " << name << " Has no HitPoints or EnergyPoints" << std::endl;
		
}
void DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << name << " has taken a dommage of " << amount << std::endl;
	HitPoints -= amount;
}
void DiamondTrap::beRepaired(unsigned int amount)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << "DiamondTrap " << name << " has repaired " << amount << std::endl;
		HitPoints += amount;
		EnergyPoints--;
	}
	else
		std::cout << "DiamondTrap " << name << " Has no HitPoints or EnergyPoints" << std::endl;
}