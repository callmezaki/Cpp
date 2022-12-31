/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:05:39 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/30 23:58:10 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "literal.hpp"

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