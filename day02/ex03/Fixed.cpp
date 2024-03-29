/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:08:36 by zait-sli          #+#    #+#             */
/*   Updated: 2022/11/27 16:38:10 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::Fbits = 8;

Fixed::Fixed()
{
	FixedN = 0;
}

Fixed::Fixed(Fixed const &a)
{
	*this = a ;
}

Fixed::Fixed(const int a)
{
	FixedN = a<<Fbits;
}
Fixed::Fixed(const float a)
{
	FixedN = roundf(a * 256);
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& t) 
{
	this->FixedN = t.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return FixedN;
}

void Fixed::setRawBits( int const raw )
{
	FixedN = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)FixedN / (256);
}

int Fixed::toInt( void ) const
{
	return FixedN>>8;
}

Fixed& Fixed::operator++()
{
	++FixedN;
	return *this;
}

Fixed& Fixed::operator--()
{
	--FixedN;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	++(*this);

	return temp;
}
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	--(*this);

	return temp;
}

Fixed& Fixed::min(Fixed& f,Fixed& f1)
{
	if (f < f1)
		return f;
	else
		return f1;
	
}
const Fixed& Fixed::min(const Fixed& f, const Fixed& f1)
{
	if (f < f1)
		return f;
	else
		return f1;
}

Fixed& Fixed::max(Fixed& f,Fixed& f1)
{
	if (f > f1)
		return f;
	else
		return f1;
	
}
const Fixed& Fixed::max(const Fixed& f, const Fixed& f1)
{
	if (f > f1)
		return f;
	else
		return f1;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return os;
}

bool Fixed::operator==(const Fixed& f) const
{
	return (this->FixedN == f.FixedN);
}
bool Fixed::operator!=(const Fixed& f)
{
	return (this->FixedN != f.FixedN);
}
bool Fixed::operator<(const Fixed& f) const
{
	return (this->FixedN < f.FixedN);
}
bool Fixed::operator>(const Fixed& f) const
{
	return (this->FixedN > f.FixedN);
}
bool Fixed::operator<=(const Fixed& f)
{
	return (this->FixedN <= f.FixedN);
}
bool Fixed::operator>=(const Fixed& f)
{
	return (this->FixedN >= f.FixedN);
}

Fixed Fixed::operator+(const Fixed& f)
{
	Fixed temp;
	temp.FixedN = this->FixedN + f.FixedN;
	return temp;
}
Fixed Fixed::operator-(const Fixed& f) const
{
	Fixed temp;
	temp.FixedN = this->FixedN - f.FixedN;
	return temp;
}
Fixed Fixed::operator*(const Fixed& f) const
{
	Fixed temp;
	temp.FixedN = this->FixedN * f.FixedN;
	temp.FixedN = temp.toFloat();
	return temp;
}
Fixed Fixed::operator/(const Fixed& f)
{
	Fixed temp;
	temp.FixedN = this->FixedN * 256 / f.FixedN * 256;
	temp.FixedN = temp.toFloat();
	return temp;
}