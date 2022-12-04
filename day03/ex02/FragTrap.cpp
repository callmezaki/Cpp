/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 04:37:02 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/01 20:43:19 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constucter called" << std::endl;
	ClapTrap::HitPoints = 100;
	ClapTrap::EnergyPoints = 100;
	ClapTrap::AttackDamage = 30;
}
FragTrap::FragTrap(std::string n)
{
	std::cout << "FragTrap Copy Constucter called" << std::endl;
	ClapTrap::name = n;
	ClapTrap::HitPoints = 100;
	ClapTrap::EnergyPoints = 100;
	ClapTrap::AttackDamage = 30;
}
FragTrap::~FragTrap() 
{
	std::cout << "FragTrap Destucter called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& Frag)
{
	std::cout << "FragTrap Copy assignment operator called " << std::endl;
	this->name = Frag.name;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " is requesting a positive high fives" << std::endl;
	
}