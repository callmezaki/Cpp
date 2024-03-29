/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:19:36 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/11 21:27:49 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main ()
{
	DiamondTrap Zack("Zack") , Buu("Buu");
	Zack.attack("Buu");
	Zack.guardGate();
	Zack.whoAmI();
	Buu.takeDamage(20);
	Buu.highFivesGuys();
}