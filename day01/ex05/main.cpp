/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:50:01 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/26 14:41:06 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>
#include "Harl.hpp"


int main()
{
	Harl harl;
	std::cout << "[ DEBUG ]" << std::endl;
	harl.complain("DEBUG");
	std::cout << "[ INFO ]" << std::endl;
	harl.complain("INFO");
	std::cout << "[ WARNING ]" << std::endl;
	harl.complain("WARNING");
	std::cout << "[ ERROR ]" << std::endl;
	harl.complain("ERROR");
}