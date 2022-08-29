/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:03:27 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/29 22:35:39 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_

#include <cctype>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private :
		std::string name;
		Weapon *weapon;
	public :
		HumanA();
		~HumanA();
		HumanA(std::string name,Weapon& weapon);
		void attack(void);
};

#endif