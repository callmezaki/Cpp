/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:05:33 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/29 05:15:16 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "literal.hpp"


void charLiteral(char c)
{
	std::cout << "char: " << c << std::endl; 
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
	// std::cout << "float: " << c << std::endl; 
}