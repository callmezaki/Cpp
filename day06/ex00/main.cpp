/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:59:31 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/27 01:57:55 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
#include <ctype.h>
#include <sstream>
#include "literal.hpp"

// int check_dijit(std::string s)
// {
// 	for(int i = 0;i < s.length(); i++)
// 	{
// 		if (i = s.length() - 1)
			
// 	}
// }

// int get_type(std::string s)
// {
// 	std::stringstream ss;
// 	double d;

// 	if (s.length() == 1)
// 	{
// 		if (isdigit(s[0]))
// 			return 1;
// 		else
// 			return 2;
// 	}
// 	else
// 	{
// 		for(int i = 0;i < s.length(); i++)
// 		{
// 			if (i = s.)
// 		}
// 	}
// }


int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Wrong number of args" << std::endl,1);
	std::string str = std::string(av[1]);
	literal l(str);
	std::cout << l.getType() << std::endl;
}