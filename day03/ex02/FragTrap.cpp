/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 04:37:02 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/09 00:27:11 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constucter called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}
FragTrap::FragTrap(std::string n)
{
	std::cout << "FragTrap String Constucter called" << std::endl;
	name = n;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap& Frag)
{
	std::cout << "FragTrap Copy Constucter called" << std::endl;
	*this = Frag;
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap Destucter called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& Frag)
{
	std::cout << "FragTrap Copy assignment operator called " << std::endl;
	name = Frag.name;
	HitPoints = Frag.HitPoints;
	EnergyPoints = Frag.EnergyPoints;
	AttackDamage = Frag.AttackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " is requesting a positive high fives" << std::endl;
}