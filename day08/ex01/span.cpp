/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 09:12:35 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/06 11:57:16 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span &copy)
{
	*this = copy;
}


Span::~Span()
{

}

void Span::addNumber(int number)
{
	if (vec.size() + 1 > N)
		throw reachedMaxNumbers();
	vec.push_back(number);
}

// void addNumbers(unsigned int numbers)
// {
// 	std::insert
// }

int Span::shortestSpan()
{
	if(vec.size() < 2)
		throw sizeTooLow();
	std::vector<int> t = vec;
	sort(t.begin(),t.end());
	int x = INT_MAX;
	for (unsigned int i = 1; i < t.size(); i++)
	{
		if (t.at(i) - t.at(i - 1) < x)
			x = t.at(i) - t.at(i - 1);
	}
	return x;
}

int Span::longestSpan()
{
	if(vec.size() < 2)
		throw sizeTooLow();
	std::cout << vec.size() << std::endl;
	return  *std::max_element(vec.begin(),vec.end()) - *std::min_element(vec.begin(),vec.end());
}

Span & Span::operator=(const Span &assign)
{
	this->N = assign.N;
	this->vec = assign.vec;
	return *this;
}

