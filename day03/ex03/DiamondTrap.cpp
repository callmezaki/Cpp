/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:58:43 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/09 00:11:47 by zait-sli         ###   ########.fr       */
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

DiamondTrap::DiamondTrap(std::string n) 
{
	std::cout << "DiamondTrap string Constructer called" << std::endl;
	this->name = n;
	ClapTrap::name = name + "_clap_name";
	HitPoints = FragTrap::HitPoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap& Diamond)
{
	std::cout << "DiamondTrap copy Constructer called" << std::endl;
	*this = Diamond;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructer called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& Diamond)
{
	std::cout << "DiamondTrap Copy assignment operator called " << std::endl;
	name = Diamond.name;
	ClapTrap::name = Diamond.name + + "_clap_name";
	HitPoints = Diamond.HitPoints;
	EnergyPoints = Diamond.EnergyPoints;
	AttackDamage = Diamond.AttackDamage;
	return *this;	
}

void DiamondTrap::whoAmI()
{
	std::cout << DiamondTrap::name << std::endl;
	std::cout << DiamondTrap::ClapTrap::name << std::endl;
}