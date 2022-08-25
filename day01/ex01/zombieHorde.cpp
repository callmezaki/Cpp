/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:37:37 by zait-sli          #+#    #+#             */
/*   Updated: 2022/08/24 22:00:12 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 0)
		return(NULL);
	Zombie *zz = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		zz[i].setName(name);
		zz[i].announce();
	}
	return(zz);
}