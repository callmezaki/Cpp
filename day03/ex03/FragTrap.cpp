/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 04:37:02 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/15 22:10:58 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() :  HitPoints(100), EnergyPoints(100),AttackDamage(30)
{

}
FragTrap::FragTrap(std::string n) : HitPoints(100), EnergyPoints(100),AttackDamage(30)
{
	name = n;
}
FragTrap::~FragTrap() 
{
	
}
void FragTrap::attack(const std::string& target)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << "FragTrap " << name << " Attacks " << target << " causing "<< AttackDamage <<" points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
		std::cout << "FragTrap " << name << " Has no HitPoints or EnergyPoints" << std::endl;
		
}
void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << name << " has taken a dommage of " << amount << std::endl;
	HitPoints -= amount;
}
void FragTrap::beRepaired(unsigned int amount)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << "FragTrap " << name << " has repaired " << amount << std::endl;
		HitPoints += amount;
		EnergyPoints--;
	}
	else
		std::cout << "FragTrap " << name << " Has no HitPoints or EnergyPoints" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " is requesting a positive high fives" << std::endl;
	
}