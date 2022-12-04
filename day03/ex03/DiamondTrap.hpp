/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:58:48 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/01 20:37:10 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP__HPP_
# define __DIAMONDTRAP__HPP_
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
	private :
		std::string	name;
		int	HitPoints;
		int	EnergyPoints;
		int AttackDamage;
	public :
		DiamondTrap();
		DiamondTrap(std::string n);
		DiamondTrap& operator=(const DiamondTrap& Diamond);
		~DiamondTrap();
		void whoAmI();
};

#endif