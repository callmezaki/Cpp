/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:03:32 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/10 21:42:32 by zait-sli         ###   ########.fr       */
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
		Weapon *weapon;
		std::string name;
	public :
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void setWeapon(class Weapon&  _weapon);
		void attack(void);
};

#endif