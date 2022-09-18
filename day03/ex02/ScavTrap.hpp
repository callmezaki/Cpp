/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:03:21 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/14 19:06:06 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ScavTrap_hpp_
# define _ScavTrap_hpp_
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	protected:
		std::string	name;
		int	HitPoints;
		int	EnergyPoints;
		int AttackDamage;
	public :
		ScavTrap();
		ScavTrap(std::string n);
		~ScavTrap();
		void guardGate(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif