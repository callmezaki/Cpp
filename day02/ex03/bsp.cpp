/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:41:47 by zait-sli          #+#    #+#             */
/*   Updated: 2022/11/25 19:12:00 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include <cstdlib>

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
	Fixed t1, t2, t3;
	Fixed SArea = getSarea(a,b,c);

	t1 = getSarea(point,b,c);
	t2 = getSarea(a,point,c);
	t3 = getSarea(a,b,point);
	if (SArea != (t1 + t2 + t3) || t1 == 0 || t2 == 0 || t3 == 0)
		return 0;
	else
		return 1;
}