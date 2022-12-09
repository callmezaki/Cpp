/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:19:31 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/09 01:04:31 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : HitPoints(10), EnergyPoints(10),AttackDamage(10)
{
	std::cout << "ClapTrap Default Constucter called" << std::endl;
}
ClapTrap::ClapTrap(std::string n) : HitPoints(10), EnergyPoints(10),AttackDamage(10)
{
	std::cout << "ClapTrap string Constucter called" << std::endl;
	name = n;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap Destucter called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& Clap)
{
	std::cout << "ClapTrap Copy Constucter called" << std::endl;
	*this = Clap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& Clap)
{
	std::cout << "ClapTrap Copy assignment operator called " << std::endl;
	name = Clap.name;
	HitPoints = Clap.HitPoints;
	EnergyPoints = Clap.EnergyPoints;
	AttackDamage = Clap.AttackDamage;
	return *this;
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
	if (HitPoints && EnergyPoints)
	{
		std::cout << "ClapTrap " << name << " has taken a dommage of " << amount << std::endl;
		HitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << name << " Has no HitPoints or EnergyPoints" << std::endl;
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