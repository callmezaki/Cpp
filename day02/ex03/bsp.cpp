/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:41:47 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/12 01:19:10 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include <cstdlib>

// class Node
// {
//   public:
//     Fixed data;
//     Node* left;
//     Node* right;
// 	Node(Fixed val)
// {
// 	data = val;

// 	left = NULL;
// 	right = NULL;
// }
// };

Fixed getSarea(Point const a, Point const b, Point const c)
{
	Fixed SArea;
	SArea = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2;
	if (SArea < 0)
		SArea = SArea * -1;
	return(SArea);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	(void)point;
	Fixed x;
	Fixed SArea = getSarea(a,b,c);
	x = getSarea(point,b,c) + getSarea(a,point,c) + getSarea(a,b,point);
	std::cout << SArea << std::endl;
	std::cout << x << std::endl;
	if (SArea == x)
		return 1;
	else
		return 0;
}