/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:05:35 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/31 00:00:40 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "literal.hpp"

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