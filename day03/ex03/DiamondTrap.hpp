/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:58:48 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/11 19:00:28 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP__HPP_
# define __DIAMONDTRAP__HPP_
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
	private:
		std::string name;
	public :
		DiamondTrap();
		DiamondTrap(std::string n);
		DiamondTrap(DiamondTrap& Diamond);
		DiamondTrap& operator=(const DiamondTrap& Diamond);
		~DiamondTrap();
		void whoAmI();
};

#endif