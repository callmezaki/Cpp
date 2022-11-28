/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:43:14 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/21 23:41:40 by zait-sli         ###   ########.fr       */
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
		Fixed& operator=(const Fixed& t);
		float toFloat( void ) const;
		int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif