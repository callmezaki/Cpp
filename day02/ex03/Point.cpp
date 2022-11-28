/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:09:09 by zait-sli          #+#    #+#             */
/*   Updated: 2022/11/25 18:37:03 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

Point& Point::operator=(const Point& t)
{
	(void)t;
	return(*this);
}

Point::Point() : x(0) , y(0)
{
}

Point::Point(const Fixed _x,const Fixed _y) : x(_x), y(_y)
{
}

Point::Point(const Point& p) : x(p.x), y(p.y)
{
}

Point::~Point()
{
}

const Fixed Point::getX() const
{
	return x;
}
const Fixed Point::getY() const
{
	return(y);
}