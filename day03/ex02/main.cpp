/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:19:36 by zait-sli          #+#    #+#             */
/*   Updated: 2022/09/14 04:41:22 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main ()
{
	FragTrap Zack("Zack") , Buu("Buu");
	Zack.attack("Buu");
	Buu.takeDamage(10);
	Buu.beRepaired(10);
}