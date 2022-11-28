/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:08:36 by zait-sli          #+#    #+#             */
/*   Updated: 2022/11/27 16:37:59 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::Fbits = 8;

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	FixedN = 0;
}

Fixed::Fixed(Fixed const &a)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = a ;
}

Fixed::Fixed(const int a)
{
	// std::cout << "Int constructor called" << std::endl;
	FixedN = a<<Fbits;
}
Fixed::Fixed(const float a)
{
	// std::cout << "Float constructor called" << std::endl;
	FixedN = roundf(a * (1<<Fbits));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& t) 
{
	// std::cout << "Copy assignment operator called " << std::endl;
	this->FixedN = t.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return FixedN;
}

void Fixed::setRawBits( int const raw )
{
	FixedN = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)FixedN / (1<<Fbits);
}

int Fixed::toInt( void ) const
{
	return FixedN>>Fbits;
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

	++FixedN;

	return temp;
}
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	--FixedN;

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

bool Fixed::operator==(const Fixed& f)
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
	temp.FixedN = this->FixedN * (1<<Fbits) / f.FixedN * (1<<Fbits);
	temp.FixedN = temp.toFloat();
	return temp;
}