/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:48:36 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/21 22:45:06 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>
#include <string>
#include "Harl.hpp"

	void Harl::debug( void )
	{
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	}
	void Harl::info( void )
	{
		std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	}
	void Harl::warning( void )
	{
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	}
	void Harl::error( void )
	{
		std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	}



	
	void Harl::complain( std::string level )
	{
		int c;
		
		std::cout << level << std::endl;
		c = 1;
		switch (c)
		{
			case 1 :
				Harl::debug();
				break;
			case 2 :
				Harl::info();
				break;
			case 3 :
				Harl::warning();
				break;
			case 4 :
				Harl::error();
				break;
		}
	}