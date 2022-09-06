/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:08:36 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/06 16:29:40 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::Fbits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	FixedN = 0;
}

Fixed::Fixed(Fixed const &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a ;
}

Fixed::Fixed(const int a)
{
	std::cout << "Int constructor called" << std::endl;
	FixedN = a<<8;
}
Fixed::Fixed(const float a)
{
	std::cout << "Float constructor called" << std::endl;
	FixedN = roundf(a * 256);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& t)
{
	std::cout << "Copy assignment operator called " << std::endl;
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
	return (float)FixedN / (256);
}

int Fixed::toInt( void ) const
{
	return FixedN>>8;
}

// std::ostream& Fixed::operator<<(std::ostream& os, const Fixed& f)
// {
// 	os << f.toFloat();
// 	return os;
// }
