/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:59:31 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/31 06:22:01 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "literal.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Wrong number of args" << std::endl, 1);
	std::string str = std::string(av[1]);
	literal l(str);
	// std::cout << l.getType() << std::endl;
}