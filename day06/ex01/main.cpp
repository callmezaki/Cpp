/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 00:20:21 by zait-sli          #+#    #+#             */
/*   Updated: 2023/01/01 01:55:37 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Serialization.hpp"

int main()
{
	Data *ptr = new Data;
	Data *ptr2;
	ptr->c = 'a';
	ptr->i = 1;
	ptr2 = deserialize(serialize(ptr));
	std::cout << ptr2->c  << "  " << ptr2->i  << std::endl;
	delete ptr;
}