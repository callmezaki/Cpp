/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:53:43 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/09 19:26:58 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie *Buu;
	Zombie *Bee;
	
	Buu = newZombie("Buu");
	Buu->announce();
	Bee = newZombie("Bee");
	Bee->announce();
	delete Buu;
	randomChump("Ran");

	delete Bee;
}