/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:19:33 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/09 00:19:03 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ClapTRap_hpp_
# define _ClapTRap_hpp_
#include <iostream>

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
		ClapTrap(ClapTrap& Clap);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& Clap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif

