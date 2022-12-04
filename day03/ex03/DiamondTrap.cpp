/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:58:43 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/03 16:27:03 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
	std::cout << "DiamondTrap Default Constructer called" << std::endl;
	ClapTrap::name = "_clap_name";
	HitPoints = FragTrap::HitPoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string n) :
{
	std::cout << "DiamondTrap Copy Constructer called" << std::endl;
	this->name = n;
	ClapTrap::name = name + "_clap_name";
	HitPoints = FragTrap::HitPoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructer called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& Diamond)
{
	std::cout << "DiamondTrap Copy assignment operator called " << std::endl;
	this->name = Diamond.name;
	return *this;	
}

void DiamondTrap::whoAmI()
{
	std::cout << DiamondTrap::name << std::endl;
	std::cout << DiamondTrap::ClapTrap::name << std::endl;
}