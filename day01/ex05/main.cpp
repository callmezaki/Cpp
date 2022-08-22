/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:50:01 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/21 22:57:11 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>
#include "Harl.hpp"


int main()
{
	void (Harl::* ptfptr) (std::string) = &Harl::complain;
	Harl harl;
	std::cout << harl.*ptfptr << std::endl;
}