/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:34:28 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/30 05:51:22 by zait-sli         ###   ########.fr       */
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
	if (!valid)
		type = "9alwa";
	if (type == "char")
		charLiteral(s.data()[0]);
	else if (type == "int")
		intLiteral(atoi(s.data()));
	else if (type == "double" || type == "float")
		doubleLiteral(atof(s.data()));
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


bool literal::signCheck(void)
{
	int count;

	count = 0;
	for (size_t i = 0; i < s.length() ; i++)
	{
		if (s.data()[i] == '+' || s.data()[i] == '-')
			count++;
	}
	if (count == 0 || (count == 1 && isdigit(s.data()[1]) &&(s.data()[0] == '+' || s.data()[0] == '-')))
		return true;
	else
		return false;
}

bool literal::pointCheck(void)
{
	int count;

	count = 0;
	for (size_t i = 0; i < s.length() ; i++)
	{
		if (s.data()[i] == '.')
			count++;
	}
	if (count == 1)
		return true;
	else
		return false;
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
	long long tmp;
	long double tmp2;
	int count;

	if(!signCheck())
		return false;
	if (type == "int")
	{
		tmp = atoll(s.data());
		if (tmp > INT_MAX || tmp < INT_MIN)
			return false;
	}
	if (type == "double")
	{
		count = 0;
		tmp2 = atof(s.data());
		if (!pointCheck())
			return false;
	}
	if(type == "float")
	{
		count = 0;
		for (size_t i = 0; i < s.length() ; i++)
		{
			if (s.data()[i] == 'f')
				count++;
		}
		if (!pointCheck() || count != 1 || s.data()[s.length() -1] != 'f' || !isdigit(s.data()[s.length() -2]))
			return false;
	}
	return true;
}

void literal::myTrim(){
	s = s.substr(s.find_first_not_of(" \t\f\v\n\r"), s.length());
	s = s.substr(0, s.find_last_not_of(" \t\f\v\n\r") +1);
}