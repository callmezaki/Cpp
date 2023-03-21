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


int operationResult(int num1, int num2, int op)
{
	switch (op)
	{
	case 43:
		return num1 + num2;
	case 42:
		return num1 * num2;
	case 45:
		return num1 - num2;
	case 47:
		if (num2 == 0)
		{
			std::cout << "Error" << std::endl;
			exit (1);
		}
		return num1 / num2;
	}
	return 0;
}

void RPN::calculate()
{
	std::string num;
	size_t t;
	size_t i = 0;

	while(1)
	{
		t = args.find(" ");
		if (t == std::string::npos)
			break;
		args = args.replace(t,1,"");
	}

	char val;
	while(i < args.length())
	{
		val = args.at(i);
		if (isnumber(val))
			stack.push(val - '0');
		else
		{
			if (stack.size() > 1)
			{
				op = val;
				nb2 = stack.top();
				stack.pop();
				nb1 = stack.top();
				stack.pop();
				stack.push(operationResult(nb1,nb2, op));
			}
			else{
				std::cout << "Error" << std::endl;
				return ;
			}
		}
		i++;
	}
	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
	else{
		std::cout << "Error" << std::endl;
	}
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

