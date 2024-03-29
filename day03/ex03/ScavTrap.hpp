/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:03:21 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/11 18:57:36 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ScavTrap_hpp_
# define _ScavTrap_hpp_
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string n);
		ScavTrap(ScavTrap& Scav);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& Scav);
		void attack(const std::string& target);
		void guardGate(void);
};

#endif