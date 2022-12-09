/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:19:36 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/09 01:01:07 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main ()
{
	ClapTrap * Zack = new ScavTrap("Zack");
	ScavTrap Buu("Buu");
	Zack->attack("Buu");
	Buu.takeDamage(10);
	Buu.beRepaired(10);
	delete Zack;
}