/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:25:11 by zait-sli          #+#    #+#             */
/*   Updated: 2022/11/25 18:33:05 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"


int main( void ) 
{
	Point p(4,2), a(0,0) , b(10,0), c(5,5);
	if (bsp(a,b,c,p))
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is not in the triangle" << std::endl;
	return 0;
}