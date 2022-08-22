/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:03:32 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/20 22:29:34 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_
#include <cctype>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private :
		Weapon *Weapon;
		std::string name;
	public :
		HumanB();
		~HumanB();
		HumanB(std::string name);
		void setWeapon(class Weapon& Weapon);
		void attack(void);
};

#endif