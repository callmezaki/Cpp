/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:48:07 by zait-sli          #+#    #+#             */
/*   Updated: 2022/11/25 18:36:38 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
# define _POINT_HPP_
#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const Fixed _x,const Fixed _y);
		Point(const Point& p);
		Point& operator=(const Point& t);
		~Point();
		const Fixed getX() const;
		const Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif