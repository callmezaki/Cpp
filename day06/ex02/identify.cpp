/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 02:08:38 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/01 04:02:11 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "identify.hpp"

Base * generate(void)
{
	srand(time(0));
	int r = rand() % 3;
	switch (r)
	{
		case 0 :
			std::cout << "Class generated is A" << std::endl;
			return new A();
		case 1 :
			std::cout << "Class generated is B" << std::endl;
			return new B();
		default :
			std::cout << "Class generated is C" << std::endl;
			return new C();
	}
}

void identify(Base* p)
{
	A * At =  dynamic_cast<A*>(p);
	if(At)
		std::cout << "* Class is A" << std::endl;
	B * Bt =  dynamic_cast<B*>(p);
	if(Bt)
		std::cout << "* Class is B" << std::endl;
	C * Ct =  dynamic_cast<C*>(p);
	if(Ct)
		std::cout << "* Class is C" << std::endl;
		
}

void identify(Base& p)
{
	try
	{
		A At = dynamic_cast<A&>(p);
		std::cout << "& Class is A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B Bt =  dynamic_cast<B&>(p);
			std::cout << "& Class is B" << std::endl;
			
		}
		catch(const std::exception& e)
		{
			try
			{
				C Ct =  dynamic_cast<C&>(p);
				std::cout << "& Class is C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "BASE" << std::endl;
			}
		}
	}
	
}