/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:19:33 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/14 04:35:16 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//relink

class ClapTrap
{
	protected :
		std::string	name;
		int	HitPoints;
		int	EnergyPoints;
		int AttackDamage;
	public :
		ClapTrap();
		ClapTrap(std::string n);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

