/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:43:14 by zait-sli          #+#    #+#             */
/*   Updated: 2022/11/25 17:32:18 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_
#include <iostream>

class Fixed
{
	private :
		int FixedN;
		static const int Fbits;
	public :
		Fixed();
		Fixed(Fixed const &a);
		Fixed(const int a);
		Fixed(const float a);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		bool operator==(const Fixed& f) const;
		bool operator!=(const Fixed& f);
		bool operator<(const Fixed& f) const;
		bool operator>(const Fixed& f) const;
		bool operator<=(const Fixed& f);
		bool operator>=(const Fixed& f);
		Fixed operator+(const Fixed& f);
		Fixed operator-(const Fixed& f) const;
		Fixed operator*(const Fixed& f) const;
		Fixed operator/(const Fixed& f);

		static Fixed& min(Fixed& f,Fixed& f1);
		static const Fixed& min(const Fixed& f, const Fixed& f1);
		static Fixed& max(Fixed& f,Fixed& f1);
		static const Fixed& max(const Fixed& f, const Fixed& f1);

		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed& operator=(const Fixed& t);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);
#endif