/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Covert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 00:51:33 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/31 00:52:16 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "literal.hpp"

void charLiteral(char c)
{
	std::cout << "char: " << c << std::endl; 
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f"<< std::endl;
	std::cout << "double: " << static_cast<double>(c)<< ".0" << std::endl;
}

void doubleLiteral(double c)
{
	std::cout << "char: ";
	
	if (isascii(static_cast<char>(c)))
	{
		if (isprint(static_cast<char>(c)))
			std::cout << static_cast<char>(c)<< std::endl;
		else
			std::cout << "Non displayable"<<std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	if (static_cast<double>(c) == static_cast<int>(c))
		std::cout << "float: " << static_cast<float>(c) << ".0f"<< std::endl;
	else
		std::cout << "float: " << static_cast<float>(c) << "f"<<  std::endl;
	if (static_cast<double>(c) == static_cast<int>(c))
		std::cout << "double: " << static_cast<float>(c) << ".0"<< std::endl;
	else
		std::cout << "double: " << static_cast<float>(c) << std::endl;
}

void intLiteral(int c)
{
	std::cout << "char: ";
	if (isascii(static_cast<char>(c)))
	{
		if (isprint( static_cast<char>(c)))
			std::cout << static_cast<char>(c )<< std::endl;
		else
			std::cout << "Non displayable"<<std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << c << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f"<< std::endl;
	std::cout << "double: " << static_cast<double>(c)<< ".0" << std::endl;
}

void handleNan(std::string s)
{
	std::cout << "char: impossible"<< std::endl;
	std::cout << "int: impossible"<< std::endl;
	if (s == "nan" || s == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else
	{
		std::cout << "float: " << atof(s.data()) << "f" << std::endl;
		std::cout << "double: " << atof(s.data()) << std::endl;
	}
}