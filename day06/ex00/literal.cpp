/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:34:28 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/27 02:15:42 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "literal.hpp"

// Constructors
literal::literal()
{
}

literal::literal(std::string str)
{
	s = str;
	myTrim();
	findType();
	if (type == "int" || type == "double" || type == "float")
		valid = numberCheck();
	else if (type == "char")
		valid = true;
}

literal::literal(const literal &copy)
{
	(void) copy;
}


// Destructor
literal::~literal()
{

}


// Operators
literal & literal::operator=(const literal &assign)
{
	(void) assign;
	return *this;
}

std::string literal::getType(void)
{
	return type;
}

int literal::allDijit(void)
{
	return s.find_first_not_of("-+0123456789") == std::string::npos;
}

int literal::doubleCheck(void)
{
	return s.find_first_not_of("-+0123456789.") == std::string::npos;
}

int literal::floatCheck(void)
{
	return s.find_first_not_of("-+0123456789.f") == std::string::npos;
}

void literal::findType(void)
{
	if (s.length() == 1)
	{
		if (isdigit(s[0]))
			type = "int";
		else
			type = "char";
	}
	else
	{
		if(allDijit())
			type = "int";
		else if(doubleCheck())
			type = "double";
		else if(floatCheck())
			type = "float";
		else
			type = "9alwa";
	}
}

bool literal::numberCheck(void)
{
	return true;
}

void literal::myTrim(){
	s = s.substr(s.find_first_not_of(" "), s.find_last_not_of(" "));
}