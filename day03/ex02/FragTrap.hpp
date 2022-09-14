/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 04:37:05 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/14 04:46:43 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
# include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
	protected:
		std::string	name;
		int	HitPoints;
		int	EnergyPoints;
		int AttackDamage;
	public :
		FragTrap();
		FragTrap(std::string n);
		~FragTrap();
		void highFivesGuys(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};