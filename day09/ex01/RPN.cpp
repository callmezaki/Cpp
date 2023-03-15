/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 04:02:51 by zait-sli          #+#    #+#             */
/*   Updated: 2023/03/15 04:48:27 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Constructors
RPN::RPN()
{
}

RPN::RPN(const RPN &copy)
{
	(void) copy;
}

RPN::RPN(std::string args)
{
	this->args = args;

	if (intialArgsCheck())
		return ;
	calculate();

}

void RPN::calculate()
{
	std::string num;
	size_t t;

	while(1)
	{
		t = args.find_first_of(" ");
		if (t == std::string::npos && args.length())
		{
			num  = args.substr(0,t);
			list.push_back(num);
		}
		if (t == std::string::npos)
			break;
		num  = args.substr(0,t);
		args = args.substr(t + 1);
		list.push_back(num);
	}
	// check if any of the numbers length is more than 1 then returns 0
	// std::list<std::string>::iterator it = list.begin();
	// std::string val;
	// while(it != list.end())
	// {
	// 	val = *it;
	// 	if (isnumber(val.c_str().at(0)))

	// }
}

int RPN::intialArgsCheck()
{
	char c;
	if (args.empty())
	{
		std::cout << "Error" << std::endl;
		return(1);
	}
		
	for (size_t i = 0; i < args.length() ; i++)
	{
		c = args.at(i);
		if (!isnumber(c) && c != ' ' && c != '-' &&  c != '+' && c != '*' && c != '/')
		{
			std::cout << "Error" << std::endl;
			return(1);
		}
	}
	return 0;
}

// Destructor
RPN::~RPN()
{
}


// Operators
RPN & RPN::operator=(const RPN &assign)
{
	(void) assign;
	return *this;
}

