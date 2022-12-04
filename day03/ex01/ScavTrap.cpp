/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:02:48 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/04 21:08:23 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default Constucter called" << std::endl;
	ClapTrap::HitPoints = 100;
	ClapTrap::EnergyPoints = 50;
	ClapTrap::AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string n) 
{
	std::cout << "ScavTrap Copy Constucter called" << std::endl;
	ClapTrap::name = n;	
	ClapTrap::HitPoints = 100;
	ClapTrap::EnergyPoints = 50;
	ClapTrap::AttackDamage = 20;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap Destucter called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& Scav)
{
	std::cout << "ScavTrap Copy assignment operator called " << std::endl;
	this->name = Scav.name;
	return *this;
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

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}