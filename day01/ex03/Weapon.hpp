/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:03:37 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/20 01:44:11 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_
#include <cctype>
#include <iostream>

class Weapon
{
	private :
		std::string type;
	public :
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string getType(void);
		void setType(std::string type);
};

#endif