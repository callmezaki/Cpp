/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:50:01 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/29 22:40:25 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>
#include "Harl.hpp"


int main(int ac, char **av)
{
	Harl harl;
	int i = 0;

	if (ac == 2)
	{
		std::string str[4] = {"DEBUG", "INFO","WARNING", "ERROR"};
		while (i < 4)
		{
			if (std::string(av[1]) == str[i])
				break ;
			i++;
		}
		switch (i)
		{
			case 0 :
				harl.complain("DEBUG");
			case 1 :
				harl.complain("INFO");
			case 2 :
				harl.complain("WARNING");
			case 3 :
				harl.complain("ERROR");
				break ;
			case 4:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}