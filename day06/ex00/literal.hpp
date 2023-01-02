/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:34:24 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/31 06:21:37 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
# define LITERAL_HPP

# include <iostream>
# include <string>
# include <limits>
# include <float.h>
#include <ctype.h>


class literal
{
	private:
		std::string s;
		std::string type;
		bool valid;
		literal();
	public:
		// Constructors
		literal(std::string str);
		literal(const literal &copy);
		// Destructor
		~literal();
		void findType(void);
		std::string getType(void);
		int allDijit(void);
		int doubleCheck(void);
		int floatCheck(void);
		bool numberCheck(void);
		bool signCheck(void);
		bool pointCheck(void);
		// Operators
		literal & operator=(const literal &assign);
		
		
};

void charLiteral(char c);
void intLiteral(int c);
void doubleLiteral(double c);
void handleNan(std::string s);

#endif