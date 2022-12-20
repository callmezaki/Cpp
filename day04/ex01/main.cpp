/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 01:02:35 by zait-sli          #+#    #+#             */
/*   Updated: 2022/12/19 12:23:07 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main (void)
{
	const Animal* meta[4];
	for (int i = 0; i < 2; i++)
		meta[i] = new Cat;
	for (int i = 2; i < 4; i++)
		meta[i] = new Dog;

	std::cout << std::endl;

	Dog dog;
	{
		Dog test;
		test = dog;
	}
	
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete meta[i];

	std::cout << std::endl;
	return 0;
}